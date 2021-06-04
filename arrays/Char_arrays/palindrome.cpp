#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  char c[n + 1];
  cin >> c;
  for (int i = 0; i < n; i++)
    if (c[i] != c[n - i - 1])
    {
      cout << "Not Palindrome";
      return 0;
    }
  cout << "Palindrome";
  return 0;
}