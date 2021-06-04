#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  int rst = 0, ren = n - 1, cst = 0, cen = m - 1;

  while (rst <= ren && cst <= cen)
  {
    //for row_start
    for (int col = cst; col <= cen; col++)
    {
      cout << a[rst][col] << " ";
    }
    rst++;
    cout << endl;

    //for column_end
    for (int row = rst; row <= ren; row++)
    {
      cout << a[row][cen] << " ";
    }
    cen--;
    cout << endl;

    //for row_end
    for (int col = cen; col >= cst; col--)
    {
      cout << a[ren][col] << " ";
    }
    ren--;
    cout << endl;

    //for column_end
    for (int row = ren; row >= rst; row--)
    {
      cout << a[row][cst] << " ";
    }
    cst++;
    cout << endl;
  }
  return 0;
}