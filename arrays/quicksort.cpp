#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
  int pivot = a[r];
  int i = l - 1;
  for (int j = l; j < r; j++)
  {
    if (a[j] < pivot)
    {
      i++;
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
  int temp = a[i + 1];
  a[i + 1] = a[r];
  a[r] = temp;
  return i + 1;
}

void QuickSort(int a[], int l, int r)
{
  if (l < r)
  {
    int pi = partition(a, l, r);
    QuickSort(a, l, pi - 1);
    QuickSort(a, pi + 1, r);
  }
}

int main()
{
  int a[] = {5, 4, 3, 2, 1};
  QuickSort(a, 0, 4);
  for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
  return 0;
}