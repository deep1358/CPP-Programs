/*
*       *
* *   * *
*   *   *
*   *   *
* *   * *
*       *
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
    cout << "*";
    if (i > 2)
    {
      for (j = 1; j <= i - 2; j++)
      {
        cout << " ";
      }
    }
    if (i > 1)
    {
      cout << "*";
    }

    int space = (num * 2) - 2 * i;
    for (j = 1; j <= space; j++)
    {
      cout << " ";
    }

    cout << "*";
    if (i > 2)
    {
      for (j = 1; j <= i - 2; j++)
      {
        cout << " ";
      }
    }
    if (i > 1)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = num; i > 0; i--)
  {
    int j;
    cout << "*";
    if (i > 2)
    {
      for (j = 1; j <= i - 2; j++)
      {
        cout << " ";
      }
    }
    if (i > 1)
    {
      cout << "*";
    }

    int space = (num * 2) - 2 * i;
    for (j = 1; j <= space; j++)
    {
      cout << " ";
    }

    cout << "*";
    if (i > 2)
    {
      for (j = 1; j <= i - 2; j++)
      {
        cout << " ";
      }
    }
    if (i > 1)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}