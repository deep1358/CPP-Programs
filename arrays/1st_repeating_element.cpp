#include <bits/stdc++.h>
using namespace std;

int maxOfArr(int a[], int n)
{
  int mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    mx = max(mx, a[i]);
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
  int maxNo = maxOfArr(a, n);
  int b[maxNo];
  for (int i = 0; i < n; i++)
  {
    b[i] = -1;
  }
  int minIdx = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (b[a[i]] != -1)
    {
      minIdx = min(minIdx, b[a[i]]);
    }
    else
    {
      b[a[i]] = i;
    }
  }
  if (minIdx == INT_MAX)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << minIdx + 1 << endl;
  }

  return 0;
}