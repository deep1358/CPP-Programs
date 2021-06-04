#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos)
{
  return ((n & (1 << pos)) != 0);
}

void unique(int a[], int n)
{
  int xorsum = 0;
  for (int i = 0; i < n; i++)
    xorsum = xorsum ^ a[i];
  int setbit = 0;
  int pos = 0;
  int tempxor = xorsum;
  while (setbit != 1)
  {
    setbit = xorsum & 1;
    pos++;
    xorsum = xorsum >> 1;
  }
  int newxor = 0;
  for (int i = 0; i < n; i++)
  {
    if (setBit(a[i], pos - 1))
    {
      newxor = newxor ^ a[i];
    }
  }
  cout << newxor << endl;
  cout << (tempxor ^ newxor);
}

int main()
{
  int a[] = {2, 4, 6, 7, 4, 5, 6, 2};
  unique(a, 8);
  return 0;
}