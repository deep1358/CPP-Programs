#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n)
{
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += a[i];
  }
  return total;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  int max_pre = 0, ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (i == 0 && a[i] > a[i + 1])
    {
      ans += 1;
    }
    else if (i == n - 1 && a[i] > sum(a, n))
    {
      ans += 1;
    }
    else
    {
      if (a[i] > max_pre && a[i] > a[i + 1])
      {
        ans += 1;
      }
    }
    max_pre += a[i];
  }
  cout << ans;
  return 0;
}