#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
  return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
  return ((n | (1 << pos)));
}

int unique(int a[], int n)
{
  int result = 0;
  for (int i = 0; i < 64; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (getBit(a[j], i))
        sum++;
    }
    if (sum % 3 != 0)
      result = setBit(result, i);
  }
  return result;
}

int main()
{
  int a[] = {2, 4, 6, 4, 4, 6, 6};
  cout << unique(a, 7) << endl;
  return 0;
}