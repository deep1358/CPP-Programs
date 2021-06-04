#include <bits/stdc++.h>
using namespace std;

void hex_to_dec(string n)
{
  int c = 0;
  int num = 0;
  int s = n.size();
  for (int i = s - 1; i >= 0; i--)
  {
    if (n[i] >= '0' && n[i] <= '9')
    {
      num += pow(16, c) * int(n[i] - '0');
    }
    else if (n[i] >= 'A' && n[i] <= 'F')
    {
      num += pow(16, c) * (int(n[i] - 'A') + 10);
    }
    c++;
  }
  cout << num;
}

int main()
{
  string n;
  cin >> n;
  hex_to_dec(n);
  return 0;
}