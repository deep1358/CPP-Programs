#include <bits/stdc++.h>
using namespace std;

void dec_to_oct(int n)
{
  int ans = 0;
  int c = 0;
  while (n > 0)
  {
    int temp = n % 8;
    ans += pow(10, c) * temp;
    c++;
    n /= 8;
  }
  cout << ans;
}

int main()
{
  int n;
  cin >> n;
  dec_to_oct(n);
  return 0;
}