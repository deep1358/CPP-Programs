#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "aabssccdddg";
  map<char, int> dict;
  for (char c : str)
  {
    if (dict.count(c))
      dict[c]++;
    else
      dict[c] = 1;
  }
  map<char, int>::iterator itr;
  // for (itr = dict.begin(); itr != dict.end(); itr++)
  //   cout << itr->first << " " << itr->second << endl;
  for (itr = dict.begin(); itr != dict.end(); itr++)
    if (itr->second == 1)
    {
      cout << itr->first;
      break;
    }
  return 0;
}