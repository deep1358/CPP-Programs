#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  for (int i = 3; i <= num; i++)
  {
    int flag = 0;
    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      cout << i << endl;
    }
  }
  return 0;
}