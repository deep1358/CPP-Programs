#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int r = 0;
  while (num > 0)
  {
    int temp = num % 10;
    r = r * 10 + temp;
    num /= 10;
  }
  cout << r;
  return 0;
}