#include <bits/stdc++.h>
using namespace std;

string lower_to_upper(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] -= 32;
  }
  return s;
}

string upper_to_lower(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] += 32;
  }
  return s;
}

int main()
{
  string str = "I am Deep Shah";

  cout << lower_to_upper(str) << endl;
  cout << upper_to_lower(str) << endl;

  transform(str.begin(), str.end(), str.begin(), ::toupper);
  cout << str << endl;

  transform(str.begin(), str.end(), str.begin(), ::tolower);
  cout << str;

  return 0;
}