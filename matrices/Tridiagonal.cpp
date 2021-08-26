#include <bits/stdc++.h>
using namespace std;

class Matrix
{
  int n, *p;

public:
  Matrix(int n)
  {
    this->n = n;
    p = new int[3 * n - 2];
    for (int i = 0; i < n; i++)
      p[i] = 0;
  }
  void set(int i, int j, int data)
  {
    if (i <= n)
    {
      if (i - j == 1)
        p[i - 1] = data;
      else if (i - j == 0)
        p[n + i - 2] = data;
      else if (i - j == -1)
        p[2 * n - 2 + i] = data;
    }
  }
  int get(int i, int j)
  {
    if (i <= n)
    {
      if (i - j == 1)
        return p[i - 1];
      else if (i - j == 0)
        return p[n + i - 2];
      else if (i - j == -1)
        return p[2 * n - 2 + i];
      return 0;
    }
  }
  void display()
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i - j == 1)
          cout << p[i - 1] << " ";
        else if (i - j == 0)
          cout << p[n + i - 2] << " ";
        else if (i - j == -1)
          cout << p[2 * n - 2 + i] << " ";
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
  m.set(1, 1, 1);
  m.set(1, 2, 1);
  m.set(2, 1, 2);
  m.set(2, 2, 1);
  m.set(2, 3, 2);
  m.set(3, 2, 3);
  m.set(3, 3, 1);
  m.set(3, 4, 2);
  m.set(4, 3, 3);
  m.set(4, 4, 4);
  m.set(4, 5, 1);
  m.set(5, 4, 2);
  m.set(5, 5, 3);
  m.display();
  return 0;
}