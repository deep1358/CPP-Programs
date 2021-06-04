/*
   1
  1 2
 1 2 3
1 2 3 4 
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    for (int j = i; j < num; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}