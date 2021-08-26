#include <bits/stdc++.h>
using namespace std;

class Matrix
{
  int n, *p;

public:
  Matrix(int n)
  {
    this->n = n;
    p = new int[n * (n + 1) / 2];
  }
  void set(int i, int j, int data, bool row = true)
  {
    if (i >= j and i <= n)
    {
      if (row)
        p[i * (i - 1) / 2 + j - 1] = data;
      else
        p[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + i - j] = data;
    };
  }
  int get(int i, int j, bool row = true)
  {
    if (i >= j and i <= n)
    {
      if (row)
        return p[i * (i - 1) / 2 + j - 1];
      else
        return p[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + i - j];
    }
    return 0;
  }
  void display(bool row = true)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i >= j)
        {
          if (row)
            cout << p[((i * (i - 1)) / 2) + j - 1] << " ";
          else
            cout << p[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + i - j] << " ";
        }
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
  m.set(1, 1, 1, false);
  m.set(2, 1, 1, false);
  m.set(2, 2, 2, false);
  m.set(3, 1, 1, false);
  m.set(3, 2, 2, false);
  m.set(3, 3, 3, false);
  m.set(4, 1, 1, false);
  m.set(4, 2, 2, false);
  m.set(4, 3, 3, false);
  m.set(4, 4, 4, false);
  m.set(5, 1, 1, false);
  m.set(5, 2, 2, false);
  m.set(5, 3, 3, false);
  m.set(5, 4, 4, false);
  m.set(5, 5, 5, false);
  m.display(false);
  cout << endl;
  m.set(1, 1, 1);
  m.set(2, 1, 1);
  m.set(2, 2, 2);
  m.set(3, 1, 1);
  m.set(3, 2, 2);
  m.set(3, 3, 3);
  m.set(4, 1, 1);
  m.set(4, 2, 2);
  m.set(4, 3, 3);
  m.set(4, 4, 4);
  m.set(5, 1, 1);
  m.set(5, 2, 2);
  m.set(5, 3, 3);
  m.set(5, 4, 4);
  m.set(5, 5, 5);
  m.display();
  return 0;
}