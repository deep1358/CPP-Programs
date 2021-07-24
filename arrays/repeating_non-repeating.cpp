#include <bits/stdc++.h>
using namespace std;

void repeating(int arr[], int n)
{
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    if (m.count(arr[i]))
      m[arr[i]]++;
    else
      m[arr[i]] = 1;
  }
  map<int, int>::iterator itr;
  for (itr = m.begin(); itr != m.end(); itr++)
    if (itr->second > 1)
      cout << itr->first << " ";
}
void nonRepeating(int arr[], int n)
{
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    if (m.count(arr[i]))
      m[arr[i]]++;
    else
      m[arr[i]] = 1;
  }
  map<int, int>::iterator itr;
  for (itr = m.begin(); itr != m.end(); itr++)
    if (itr->second == 1)
      cout << itr->first << " ";
}

int main()
{
  int a[] = {1, 2, 3, 4, 2, 3};
  repeating(a, 6);
  cout << endl;
  nonRepeating(a, 6);
  return 0;
}