#include <bits/stdc++.h>
using namespace std;

string moveAll(string s)
{
  if (s.length() == 0)
    return "";
  char ch = s[0];
  string ans = moveAll(s.substr(1));
  cout << ch << endl;
  cout << ans << endl;
  if (ch == 'x')
    return ans + ch;
  return ch + ans;
}

int main()
{
  cout << moveAll("xDxxeep");
  return 0;
}