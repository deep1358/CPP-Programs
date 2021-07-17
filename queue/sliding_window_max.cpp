#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  multiset<int, greater<int>> s;
  for (auto i : a)
    cout << i << " ";

  return 0;
}