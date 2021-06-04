#include <bits/stdc++.h>
using namespace std;

void dec_to_bin(int n)
{
  int ans = 0;
  int c = 0;
  while (n > 0)
  {
    int temp = n % 2;
    ans += pow(10, c) * temp;
    c++;
    n /= 2;
  }
  cout << ans;
}

int main()
{
  int n;
  cin >> n;
  dec_to_bin(n);
  return 0;
}