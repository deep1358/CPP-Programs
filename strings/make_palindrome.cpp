#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "abcdef";
  int length = str.length() / 2, i = 0, cost = 0;
  while (length > 0)
  {
    int diff = _abs64(int(str[i]) - int(str[str.length() - 1 - i]));
    if (diff > 0)
      cost += diff;
    i++;
    length--;
  }
  cout << cost;
  return 0;
}