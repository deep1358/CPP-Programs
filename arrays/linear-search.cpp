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
  int search;
  cout << "Type number to find: ";
  cin >> search;
  int flag = 0;
  for (int i = 0; i < n; i++)
  {
    if (search == a[i])
    {
      cout << "Number found at " << i;
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    cout << "Number is not available in array.";
  }
  return 0;
}