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
  for (int i = 0; i < n; i++)
  {
    int current = 0;
    for (int j = i; j < n; j++)
    {
      current += a[j];
      cout << current << " ";
    }
  }
  return 0;
}