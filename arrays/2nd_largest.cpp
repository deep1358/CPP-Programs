#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int l = INT_MIN, sl = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > l)
    {
      sl = l;
      l = arr[i];
    }
    else if (arr[i] > sl and arr[i] < l)
      sl = arr[i];
  }
  cout << sl;
  return 0;
}