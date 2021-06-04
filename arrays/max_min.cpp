#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int maxNo = INT_MIN;
  int minNo = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    // if (maxNo < a[i])
    //   maxNo = a[i];
    // if (minNo > a[i])
    //   minNo = a[i];
    maxNo = max(maxNo, a[i]);
    minNo = min(minNo, a[i]);
  }
  cout << maxNo << " " << minNo;
  return 0;
}