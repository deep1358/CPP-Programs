#include <bits/stdc++.h>
using namespace std;

class Matrix
{
  int n, *p;

public:
  Matrix(int n)
  {
    this->n = n;
    p = new int[2 * n - 1];
    for (int i = 0; i < n; i++)
      p[i] = 0;
  }
  void set(int i, int j, int data)
  {
    if (i <= n)
    {
      if (i <= j)
        p[j - i] = data;
      else
        p[n + i - j - 1] = data;
    }
  }
  int get(int i, int j)
  {
    if (i <= n)
    {
      if (i <= j)
        return p[j - i];
      else
        return p[n + i - j - 1];
    }
  }
  void display()
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i <= j)
          cout << p[j - i] << " ";
        else
          cout << p[n + i - j - 1] << " ";
      }
      cout << endl;
    }
  }
  ~Matrix() { delete[] p; }
};

int main()
{
  Matrix m(5);
  for (int i = 1; i <= 5; i++)
    for (int j = 1; j <= 5; j++)
    {
      int x;
      cin >> x;
      m.set(i, j, x);
    }
  m.display();
  return 0;
}