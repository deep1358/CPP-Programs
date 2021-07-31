#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  if (n == 1 || n == 0)
    return n;
  return n * factorial(n - 1);
}

double taylor(int x, int n)
{
  static double r, p = 1, f = 1;
  if (n == 0)
    return 1;
  r = taylor(x, n - 1);
  p = p * x;
  f = f * n;
  return (r + p / f);
  // return (pow(x, n) / factorial(n)) + taylor(x, n - 1);
}

int main()
{
  int x, n;
  cin >> x >> n;
  float sum = 1;
  for (int i = 1; i <= n; i++)
    sum += pow(x, i) / factorial(i);
  cout << "Iterative -> " << fixed << setprecision(3) << sum << endl;
  cout << "Recursive -> " << fixed << setprecision(3) << taylor(x, n);
  return 0;
}