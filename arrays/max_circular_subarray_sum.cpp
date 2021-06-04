#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
  int curr = 0, mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    curr += a[i];
    if (curr < 0)
    {
      curr = 0;
    }
    mx = max(mx, curr);
  }
  return mx;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int wrapsum, nowrapsum;
  nowrapsum = kadane(a, n);

  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += a[i];
    a[i] = -a[i];
  }
  wrapsum = total + kadane(a, n);
  cout << max(wrapsum, nowrapsum);
  return 0;
}