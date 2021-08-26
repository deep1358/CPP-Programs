#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int gcd1(int a, int b)
{
  if (b == 0)
    return a;
  if (a == 0)
    return b;
  if (a == b)
    return a;
  if (a > b)
    return gcd1(a - b, a);
  return gcd1(a, b - a);
}

int main()
{
  cout << gcd1(15, 20);
  return 0;
}