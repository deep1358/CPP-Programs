#include <iostream>
#include <math.h>
using namespace std;

int factorial(int num)
{
  if (num == 1)
    return 1;
  return factorial(num - 1) * num;
}

int main()
{
  int num;
  cin >> num;
  int result = factorial(num);
  cout << result;
  return 0;
}