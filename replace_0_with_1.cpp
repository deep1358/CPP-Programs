#include <bits/stdc++.h>
using namespace std;

long long int replace_0_with_1(long int n)
{
  string str = to_string(n), str1 = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '1')
      str1 += '0';
    else
      str1 += str[i];
  }
  return stoi(str1);
}

int main()
{
  long long int n = 26112621;
  n = replace_0_with_1(n);
  cout << n;
  return 0;
}