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

  //KADANE's Algo (O(n))
  int curr = 0, maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    curr += a[i];
    if (curr < 0)
    {
      curr = 0;
    }
    maxSum = max(maxSum, curr);
  }
  cout << maxSum;

  //O(n2)
  // int sum = 0;
  // for (int i = 0; i < n; i++)
  // {
  //   int curr = 0;
  //   for (int j = i; j < n; j++)
  //   {
  //     curr += a[j];
  //     sum = max(sum, curr);
  //   }
  // }
  // cout << sum;

  return 0;
}