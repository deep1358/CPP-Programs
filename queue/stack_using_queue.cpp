#include <bits/stdc++.h>
using namespace std;

// class Stack
// {
//   int N;
//   queue<int> q1;
//   queue<int> q2;

// public:
//   Stack()
//   {
//     N = 0;
//   }
//   void push(int x)
//   {
//     q2.push(x);
//     N++;
//     while (!q1.empty())
//     {
//       q2.push(q1.front());
//       q1.pop();
//     }
//     queue<int> temp = q1;
//     q1 = q2;
//     q2 = temp;
//   }
//   void pop()
//   {
//     q1.pop();
//     N--;
//   }
//   int top()
//   {
//     return q1.front();
//   }
//   int size() { return N; }
// };

class Stack
{
  int N;
  queue<int> q1;
  queue<int> q2;

public:
  Stack()
  {
    N = 0;
  }
  void push(int x)
  {
    q1.push(x);
    N++;
  }
  void pop()
  {
    if (q1.empty())
    {
      cout << "Empty Queue" << endl;
      return;
    }
    while (q1.size() != 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    q1.pop();
    N--;

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }
  int top()
  {
    if (q1.empty())
      return -1;
    while (q1.size() != 1)
    {
      q2.push(q1.front());
      q1.pop();
    }
    int ans = q1.front();
    q2.push(ans);

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;

    return ans;
  }
  int size() { return N; }
};

int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(6);
  cout << s.top() << " " << s.size() << endl;
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  cout << s.size();
  return 0;
}