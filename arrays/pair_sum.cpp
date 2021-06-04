#include <bits/stdc++.h>
using namespace std;

bool pairsum(int a[], int n, int k)
{
  int low = 0, high = n - 1;
  while (low < high)
  {
    if (a[high] + a[low] == k)
    {
      cout << low << " " << high << endl;
      return true;
    }
    else if (a[low] + a[high] > k)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
  return false;
}

int main()
{
  int k;
  cin >> k;
  int a[8] = {2, 4, 7, 11, 14, 16, 20, 21};
  pairsum(a, 8, k);
  return 0;
}