#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
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
  int minIdx;
  for (int i = 0; i < n - 1; i++)
  {
    minIdx = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[minIdx] > a[j])
      {
        minIdx = j;
      }
    }
    swap(&a[minIdx], &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}