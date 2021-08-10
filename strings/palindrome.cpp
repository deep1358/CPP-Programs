#include <bits/stdc++.h>
using namespace std;

bool palindrome1(string s)
{
  string s1;
  for (int i = s.length() - 1; i >= 0; i--)
    s1 += s[i];
  return s1 == s;
}

bool palindrome2(string s)
{
  for (int i = 0; i < s.length() / 2; i++)
    if (s[i] != s[s.length() - i - 1])
      return false;
  return true;
}

int main()
{
  string s = "madam", s1 = "deep";

  cout << palindrome1(s) << " " << palindrome1(s1) << endl;
  cout << palindrome2(s) << " " << palindrome2(s1);

  return 0;
}