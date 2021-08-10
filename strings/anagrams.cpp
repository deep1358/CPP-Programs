#include <bits/stdc++.h>
using namespace std;

bool is_anagram(string s1, string s2)
{
  int a[26] = {0};
  for (int i = 0; i < s1.length(); i++)
    a[s1[i] - 97]++;
  for (int i = 0; i < s2.length(); i++)
    a[s2[i] - 97]--;
  for (int i : a)
    if (i != 0)
      return false;
  return true;
}

int main()
{
  string s1 = "verbose", s2 = "observe";
  cout << is_anagram(s1, s2);
  return 0;
}