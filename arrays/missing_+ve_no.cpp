#include <bits/stdc++.h>
using namespace std;

int maxi(int a[], int n)
{
  int mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    mx = max(mx, a[i]);
  }
  return mx;
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
  int maxNo = maxi(a, n);
  int b[maxNo + 1];
  for (int i = 0; i < n; i++)
  {
    b[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    cout << b[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0)
    {
      b[a[i]]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << b[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    if (b[i] == 0)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}