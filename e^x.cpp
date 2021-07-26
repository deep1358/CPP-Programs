#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  if (n == 1 || n == 0)
    return n;
  return n * factorial(n - 1);
}

int main()
{
  int x;
  cin >> x;
  float sum = 1;
  for (int i = 1; i <= 10; i++)
    sum += pow(x, i) / factorial(i);
  cout << fixed << setprecision(3) << sum;
  return 0;
}