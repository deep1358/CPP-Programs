#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {9, 8, 5, 1, 8, 7, 2, 3};
  for (int i = 0; i < 8; i++)
    for (int j = 0; j < 8 - i - 1; j++)
      if (a[j] > a[j + 1])
        swap(a[j], a[j + 1]);

  for (int i : a)
    cout << i << " ";
  return 0;
}