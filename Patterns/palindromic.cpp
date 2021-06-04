/*
  1
 212
32123
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    int k = i;
    for (int j = i; j < num; j++)
    {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << k-- << " ";
    }
    k = 2;
    for (int j = 1; j <= i - 1; j++)
    {
      cout << k++ << " ";
    }
    cout << endl;
  }
  return 0;
}