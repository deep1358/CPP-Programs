#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Hello Deep   Hii       I        am";
  int words = 1;
  for (int i = 0; i < s.length(); i++)
    if (s[i] == ' ' and s[i - 1] != ' ')
      words++;
  cout << words;
  return 0;
}