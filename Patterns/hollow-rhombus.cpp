/*
  * * *
 *   *
* * *
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    int j;
    for (j = 1; j <= num - i; j++)
    {
      cout << " ";
    }
    if (i == 1 || i == num)
    {
      for (j = 1; j <= num; j++)
      {
        cout << "*";
      }
    }

    else
    {
      cout << "*";
      for (j = 1; j <= num - 2; j++)
      {
        cout << " ";
      }
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}