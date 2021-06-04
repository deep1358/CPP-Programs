#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int mid, int r)
{
  cout << "mid " << mid << endl;
  cout << "l " << l << endl;
  cout << "r " << r << endl;
  int n1 = mid - l + 1;
  int n2 = r - mid;

  cout << "n1 " << n1 << endl;
  cout << "n2 " << n2 << endl
       << endl;

  int b[n1], c[n2];

  for (int i = 0; i < n1; i++)
    b[i] = a[l + i];
  for (int i = 0; i < n2; i++)
    c[i] = a[mid + 1 + i];

  int i = 0, j = 0, k = l;

  while (i < n1 && j < n2)
  {
    if (b[i] < c[j])
    {
      a[k] = b[i];
      i++;
      k++;
    }
    else
    {
      a[k] = c[j];
      j++;
      k++;
    }
  }

  while (i < n1)
  {
    a[k] = b[i];
    i++;
    k++;
  }
  while (j < n2)
  {
    a[k] = c[j];
    j++;
    k++;
  }
}

void MergeSort(int a[], int l, int r)
{
  if (l < r)
  {
    int mid = (l + r) / 2;

    MergeSort(a, l, mid);
    MergeSort(a, mid + 1, r);
    Merge(a, l, mid, r);
  }
}

int main()
{
  int a[] = {5, 4, 3, 2, 1};
  MergeSort(a, 0, 4);
  for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
  return 0;
}