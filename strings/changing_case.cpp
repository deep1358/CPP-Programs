#include <bits/stdc++.h>
using namespace std;

void toggle_case(string &s)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 'A' and s[i] <= 'Z')
      s[i] += 32;
    else if (s[i] >= 'a' and s[i] <= 'z')
      s[i] -= 32;
  }
}

int main()
{
  string s = "Hello Deep";
  toggle_case(s);
  cout << s;
  return 0;
}