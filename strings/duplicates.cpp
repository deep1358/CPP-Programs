#include <bits/stdc++.h>
using namespace std;

void find_duplicates_using_arrays(string s)
{
  int a[26] = {0};
  for (int i = 0; i < s.length(); i++)
    a[s[i] - 'a']++;
  for (int i = 0; i < 26; i++)
    if (a[i] > 1)
      cout << char(97 + i) << " -> " << a[i] << " times" << endl;
}

void find_duplicates_using_map(string s)
{
  map<char, int> m;
  for (int i = 0; i < s.length(); i++)
  {
    if (m.find(s[i]) == m.end())
      m[s[i]] = 1;
    else
      m[s[i]]++;
  }
  map<char, int>::iterator itr;
  for (itr = m.begin(); itr != m.end(); ++itr)
    if (itr->second > 1)
      cout << itr->first << " -> " << itr->second << " times" << endl;
}

void print_duplicates_bitwise(string s)
{
  long h = 0, x = 0;
  for (int i = 0; i < s.length(); i++)
  {
    x = 1;
    x = x << s[i] - 97;
    if ((x & h) > 0)
      cout << s[i] << " ";
    else
      h = x | h;
  }
}

int main()
{
  string s = "easfcewcse adcdec";
  // find_duplicates_using_arrays(s);
  // find_duplicates_using_map(s);
  print_duplicates_bitwise(s);
  return 0;
}