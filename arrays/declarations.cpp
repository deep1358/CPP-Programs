#include <bits/stdc++.h>
using namespace std;

int main()
{
  int *p[3];
  p[0] = new int[3];
  p[1] = new int[3];
  p[2] = new int[3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      cout << p[i][j] << " ";
    cout << endl;
  }
  cout << endl;

  int **a;
  a = new int *[3];
  a[0] = new int[3];
  a[1] = new int[3];
  a[2] = new int[3];

  a[2][2] = 90;

  cout << a + 2 << endl;
  cout << *(a + 2) << endl;
  cout << *(*(a + 2) + 2) << endl;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }

  return 0;
}