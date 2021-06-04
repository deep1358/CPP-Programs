#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.first < p2.first;
}

int main()
{

  // vector<int> v;
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);

  // vector<int>::iterator it;
  // for (it = v.begin(); it != v.end(); it++)
  //   cout << *it << endl;

  // v.pop_back();

  // for (auto element : v)
  //   cout << element << " ";

  // vector<int> v2(3, 50);

  // cout << endl;

  // swap(v, v2);

  // for (auto element : v)
  //   cout << element << " ";

  // pair<int, char> p;
  // p.first = 9;
  // p.second = 'A';

  int a[] = {10, 16, 7, 14, 5, 3, 2, 9};

  vector<pair<int, int>> v;

  for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
  {
    // pair<int, int> p;
    // p.first=a[i];
    // p.second=i;
    v.push_back(make_pair(a[i], i));
  }

  for (auto element : v)
  {
    cout << element.first << " " << element.second << endl;
  }
  cout << endl;

  sort(v.begin(), v.end(), myCompare);

  for (auto element : v)
  {
    cout << element.first << " " << element.second << endl;
  }

  cout << endl;
  for (int i = 0; i < v.size(); i++)
  {
    a[v[i].second] = i;
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}