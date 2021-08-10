#include <bits/stdc++.h>
using namespace std;

int Partition(int a[], int l, int r)
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
    int p = Partition(a, l, r);
    QuickSort(a, l, p - 1);
    QuickSort(a, p + 1, r);
  }
}

int main()
{
  int a[] = {9, 8, 5, 1, 8, 7, 2, 3};
  QuickSort(a, 0, 7);
  for (int i : a)
    cout << i << " ";
  return 0;
}