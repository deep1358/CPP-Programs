/*
****
*  *
*  *
****
*/

#include <iostream>
using namespace std;

int main()
{
  int row;
  int col;
  cin >> row >> col;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (i == 0 || i + 1 == row || j == 0 || j + 1 == col)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}