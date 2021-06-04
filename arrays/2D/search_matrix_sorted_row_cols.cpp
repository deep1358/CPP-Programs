#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, k;
  cin >> n >> m >> k;
  int a[n][m];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  int row = 0, col = m - 1;
  while (row < n && col >= 0)
  {
    if (a[row][col] == k)
    {
      cout << "Found at "
           << "(" << row << "," << col << ")";
      return 0;
    }
    else if (a[n][m] < k)
      col--;
    else
      row++;
  }
  cout << "Not Found";

  return 0;
}