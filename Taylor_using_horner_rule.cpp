#include <bits/stdc++.h>
using namespace std;

double taylor(int x, int n)
{
  static double s;
  if (n == 0)
    return s;
  s = 1 + x * s / n;
  return taylor(x, n - 1);
}

int main()
{
  int x = 1, n = 10;
  cout << taylor(x, n) << endl;
  double num = 1, d = 1, s = 1;
  for (int i = 1; i <= n; i++)
  {
    num *= x;
    d *= i;
    s += num / d;
  }
  cout << s;
  return 0;
}