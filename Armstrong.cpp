#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int original_num = num;
  int total = 0;
  while (num > 0)
  {
    int temp = num % 10;
    total += pow(temp, 3);
    num /= 10;
  }
  if (original_num == total)
  {
    cout << "Armstrong";
  }
  else
  {
    cout << "Not Armstrong";
  }
  return 0;
}