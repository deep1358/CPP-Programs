#include <bits/stdc++.h>
using namespace std;

class Matrix
{
  int n, *p;

public:
  Matrix(int n)
  {
    this->n = n;
    p = new int[n];
  }
  void set(int i, int j, int data)
  {
    if (i == j and i <= n)
      p[i - 1] = data;
  }
  int get(int i, int j)
  {
    if (i == j and i <= n)
      return p[i - 1];
    return 0;
  }
  void display()
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i == j)
          cout << p[i] << " ";
        else
          cout << "0 ";
      }
      cout << endl;
    }
  }
  ~Matrix() { delete[] p; }
};

int main()
{
  Matrix m(5);
  m.set(1, 1, 2);
  m.set(2, 2, 3);
  m.set(3, 3, 4);
  m.set(4, 4, 5);
  m.set(5, 5, 6);
  m.display();
  cout << m.get(1, 1);
  return 0;
}