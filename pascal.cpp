#include <iostream>
#include <math.h>
using namespace std;

int fact(int num)
{
  int f = 1;
  while (num > 0)
  {
    f *= num;
    num--;
  }
  return f;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << fact(i) / (fact(j) * fact(i - j)) << " ";
    }
    cout << endl;
  }
  return 0;
}