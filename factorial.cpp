#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int fact = 1;
  while (num > 0)
  {
    fact *= num;
    num -= 1;
  }
  cout << fact;
  return 0;
}