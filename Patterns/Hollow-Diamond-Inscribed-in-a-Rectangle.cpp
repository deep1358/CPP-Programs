/*
*****
** **
*   *
*   *
** **
*****
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  for (int i = num; i > 0; i--)
  {
    int j;
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = (2 * num) - 1 - (2 * i);
    for (j = 1; j <= space; j++)
    {
      cout << " ";
    }
    if (i == num)
    {
      for (j = 1; j < i; j++)
      {
        cout << "*";
      }
    }
    else
    {
      for (j = 1; j <= i; j++)
      {
        cout << "*";
      }
    }

    cout << endl;
  }
  for (int i = 1; i <= num; i++)
  {
    int j;
    for (j = 1; j <= i; j++)
    {
      cout << "*";
    }
    int space = (2 * num) - 1 - (2 * i);
    for (j = 1; j <= space; j++)
    {
      cout << " ";
    }
    if (i == num)
    {
      for (j = 1; j < i; j++)
      {
        cout << "*";
      }
    }
    else
    {
      for (j = 1; j <= i; j++)
      {
        cout << "*";
      }
    }

    cout << endl;
  }

  return 0;
}