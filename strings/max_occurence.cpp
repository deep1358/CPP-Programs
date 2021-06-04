#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "deep";
  int count[26];
  for (int i = 0; i < 26; i++)
    count[i] = 0;
  for (int i = 0; i < str.size(); i++)
    count[str[i] - 'a']++;
  for (int i = 0; i < 26; i++)
    cout << count[i] << " ";
  cout << endl;
  char ans = 'a';
  int mx = 0;
  for (int i = 0; i < 26; i++)
  {
    if (count[i] >= mx)
    {
      mx = count[i];
      ans = i + 'a';
    }
  }
  cout << ans << " " << mx;
  return 0;
}