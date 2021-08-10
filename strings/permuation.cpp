#include <bits/stdc++.h>
using namespace std;

void permutation(string s, int k)
{
  static int a[10] = {0};
  static char res[10];
  int i;
  if (s[k] == '\0')
  {
    res[k] = '\0';
    for (auto c : res)
      cout << c;
    cout << endl;
  }
  else
  {
    for (i = 0; s[i] != '\0'; i++)
    {
      if (a[i] == 0)
      {
        res[k] = s[i];
        a[i] = 1;
        permutation(s, k + 1);
        a[i] = 0;
      }
    }
  }
}

void permutation_swap(string s, int l, int h)
{
  int i;
  if (l == h)
    cout << s << endl;
  else
    for (i = l; i < s.length(); i++)
    {
      swap(s[l], s[i]);
      permutation_swap(s, l + 1, h);
      swap(s[l], s[i]);
    }
}

int main()
{
  string s = "abc";
  permutation_swap(s, 0, s.length() - 1);
  return 0;
}