/*
   1
  1 1
 1 2 1
1 3 3 1
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int k = 1;
  for (int i = 0; i < num; i++)
  {
    int j;
    for (j = 1; j <= num - i; j++)
    {
      cout << " ";
    }
    for (j = 0; j <= i; j++)
    {
      if (j == 0 || i == 0)
      {
        k = 1;
      }
      else
      {
        k = k * (i - j + 1) / j;
      }
      cout << k << " ";
    }
    cout << endl;
  }

  return 0;
}