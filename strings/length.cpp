#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Hello Deep";
  int i = 0;
  for (i = 0; s[i] != '\0'; i++)
    ;
  cout << i << " " << s.length();
  return 0;
}