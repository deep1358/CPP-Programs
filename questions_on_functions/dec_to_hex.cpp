#include <bits/stdc++.h>
using namespace std;

void dec_to_hex(int n)
{
  string ans = "";
  while (n > 0)
  {
    int temp = n % 16;
    if (temp <= 9)
    {
      ans += to_string(temp);
    }
    else
    {
      char c = 'A' + temp - 10;
      ans.push_back(c);
    }
    n /= 16;
  }
  reverse(ans.begin(), ans.end());
  cout << ans;
}

int main()
{
  int n;
  cin >> n;
  dec_to_hex(n);
  return 0;
}