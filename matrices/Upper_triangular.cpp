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
    if (i <= j and i <= n)
    {
      if (row)
        p[n * (i - 1) - (((i - 2) * (i - 1)) / 2) + j - i] = data;
      else
        p[j * (j - 1) / 2 + i - 1] = data;
    };
  }
  int get(int i, int j, bool row = true)
  {
    if (i <= j and i <= n)
    {
      if (row)
        return p[n * (i - 1) - (((i - 2) * (i - 1)) / 2) + j - i];
      else
        return p[j * (j - 1) / 2 + i - 1];
    }
    return 0;
  }
  void display(bool row = true)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (i <= j)
        {
          if (row)
            cout << p[n * (i - 1) - (((i - 2) * (i - 1)) / 2) + j - i] << " ";
          else
            cout << p[((j * (j - 1)) / 2) + i - 1] << " ";
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
  m.set(1, 2, 2, false);
  m.set(1, 3, 3, false);
  m.set(1, 4, 4, false);
  m.set(1, 5, 5, false);
  m.set(2, 2, 1, false);
  m.set(2, 3, 2, false);
  m.set(2, 4, 3, false);
  m.set(2, 5, 4, false);
  m.set(3, 3, 1, false);
  m.set(3, 4, 2, false);
  m.set(3, 5, 3, false);
  m.set(4, 4, 1, false);
  m.set(4, 5, 2, false);
  m.set(5, 5, 1, false);
  m.display(false);
  cout << endl;
  m.set(1, 1, 1);
  m.set(1, 2, 2);
  m.set(1, 3, 3);
  m.set(1, 4, 4);
  m.set(1, 5, 5);
  m.set(2, 2, 1);
  m.set(2, 3, 2);
  m.set(2, 4, 3);
  m.set(2, 5, 4);
  m.set(3, 3, 1);
  m.set(3, 4, 2);
  m.set(3, 5, 3);
  m.set(4, 4, 1);
  m.set(4, 5, 2);
  m.set(5, 5, 1);
  m.display();
  return 0;
}