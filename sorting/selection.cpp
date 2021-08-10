#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {9, 8, 5, 1, 8, 7, 2, 3};
  for (int i = 0; i < 8; i++)
  {
    int minidx = i;
    for (int j = i + 1; j < 8; j++)
    {
      if (a[minidx] > a[j])
        minidx = j;
    }
    swap(a[i], a[minidx]);
  }
  for (int i : a)
    cout << i << " ";
  return 0;
}