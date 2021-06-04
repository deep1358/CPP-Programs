#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
  int total = 0;
  for (int i = 1; i <= n; i++)
  {
    total += i;
  }
  return total;
}

int main()
{
  int num;
  cin >> num;
  cout << sum(num) << endl;
  return 0;
}