/*
  *
 * *
*   *
 * *
  * 
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
    cout << "*";
    for (j = 1; j < 2 * i - 1; j++)
    {
      cout << " ";
    }
    cout << "*";
    for (j = 1; j <= num - i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
  for (int i = num; i > 0; i--)
  {
    int j;
    for (j = 1; j <= num - i; j++)
    {
      cout << " ";
    }
    cout << "*";
    for (j = 1; j < 2 * i - 1; j++)
    {
      cout << " ";
    }
    cout << "*";
    for (j = 1; j <= num - i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}