#include <iostream>
#include <math.h>
using namespace std;

void prime(int num1, int num2)
{
  for (int i = num1; i <= num2; i++)
  {
    int flag = 1;
    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
    {
      cout << i << " ";
    }
  }
}

int main()
{
  int num1, num2;
  cin >> num1 >> num2;
  prime(num1, num2);
  return 0;
}
