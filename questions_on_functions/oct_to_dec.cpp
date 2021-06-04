#include <bits/stdc++.h>
using namespace std;

void oct_to_dec(int n)
{
  int c = 0;
  int num = 0;
  while (n > 0)
  {
    int temp = n % 10;
    num += temp * pow(8, c);
    c++;
    n /= 10;
  }
  cout << num;
}

int main()
{
  int n;
  cin >> n;
  oct_to_dec(n);
  return 0;
}