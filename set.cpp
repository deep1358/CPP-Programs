#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(3);
  for (auto i : s)
    cout << i << " ";
  s.erase(2);
  cout << endl;
  for (auto i : s)
    cout << i << " ";
  cout << endl;
  s.erase(s.begin());
  for (auto i : s)
    cout << i << " ";
  cout << endl;
  unordered_set<int> us;
  us.insert(1);
  us.insert(2);
  us.insert(3);
  us.insert(3);
  for (auto i : us)
    cout << i << " ";
  us.erase(2);
  cout << endl;
  for (auto i : us)
    cout << i << " ";
  cout << endl;
  us.erase(us.begin());
  for (auto i : us)
    cout << i << " ";
  return 0;
}
