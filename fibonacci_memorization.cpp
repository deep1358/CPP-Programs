#include <bits/stdc++.h>
using namespace std;

int a[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

int fibonacci(int n)
{
  if (n <= 1)
  {
    a[n] = n;
    return n;
  }
  else
  {
    if (a[n - 2] == -1)
      a[n - 2] = fibonacci(n - 2);
    if (a[n - 1] == -1)
      a[n - 1] = fibonacci(n - 1);
    a[n] = a[n - 1] + a[n - 2];
    return a[n];
  }
}

int main()
{
  cout << fibonacci(6);
  return 0;
}