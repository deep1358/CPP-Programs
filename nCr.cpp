#include <iostream>
#include <math.h>
using namespace std;

int factorial(int num)
{
  if (num == 1)
  {
    return 1;
  }
  return factorial(num - 1) * num;
}

int main()
{
  int n, r;
  cin >> n >> r;
  int ans = factorial(n) / (factorial(r) * factorial(n - r));
  cout << ans;
  return 0;
}