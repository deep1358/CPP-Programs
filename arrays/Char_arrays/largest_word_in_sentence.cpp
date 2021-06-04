#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();

  char a[n + 1];

  cin.getline(a, n);
  cin.ignore();

  int mx = 0, curr = 0;
  int i = 0;
  int st = 0, mxst = 0;
  while (1)
  {
    if (a[i] == ' ' || a[i] == '\0')
    {
      if (curr > mx)
      {
        mx = curr;
        mxst = st;
      }
      curr = 0;
      st = i + 1;
    }

    else
      curr++;
    if (a[i] == '\0')
      break;
    i++;
  }
  for (int i = 0; i < mx; i++)
    cout << a[i + mxst];

  return 0;
}