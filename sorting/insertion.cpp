#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {9, 8, 5, 1, 8, 7, 2, 3};
  for (int i = 1; i < 8; i++)
  {
    int j = i - 1, cur = a[i];
    while (j >= 0 and a[j] > cur)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = cur;
  }
  for (int i : a)
    cout << i << " ";
  return 0;
}