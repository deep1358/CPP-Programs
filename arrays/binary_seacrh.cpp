#include <bits/stdc++.h>
using namespace std;

int binary_search(int search, int n, int a[])
{
  sort(a, a + n);
  int start = 0;
  int end = n;
  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (a[mid] == search)
    {
      return mid;
    }
    else if (a[mid] > search)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return -1;
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
  int search;
  cout << "Type number to find: ";
  cin >> search;
  cout << binary_search(search, n, a);
  return 0;
}