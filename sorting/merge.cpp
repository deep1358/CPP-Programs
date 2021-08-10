#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int r, int mid)
{
  int n1 = mid - l + 1;
  int n2 = r - mid;
  int b[n1], c[n2];
  int i = 0, j = 0, k = l;

  for (int i = 0; i < n1; i++)
    b[i] = a[l + i];

  for (int i = 0; i < n2; i++)
    c[i] = a[mid + 1 + i];

  while (i < n1 and j < n2)
  {
    if (b[i] < c[j])
      a[k++] = b[i++];
    else
      a[k++] = c[j++];
  }

  while (i < n1)
    a[k++] = b[i++];

  while (j < n2)
    a[k++] = c[j++];
}

void MergeSort(int a[], int l, int r)
{
  if (l < r)
  {
    int mid = (l + r) / 2;
    MergeSort(a, l, mid);
    MergeSort(a, mid + 1, r);
    Merge(a, l, r, mid);
  }
}

int main()
{
  int a[] = {9, 8, 5, 1, 8, 7, 2, 3};
  MergeSort(a, 0, 7);
  for (int i : a)
    cout << i << " ";
  return 0;
}