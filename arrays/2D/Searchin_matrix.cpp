#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (k == a[i][j])
      {
        cout << "Found" << endl;
        return 0;
      }
    }
  }
  cout << "Not Found";
  return 0;
}