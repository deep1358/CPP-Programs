/*
1
23
456
78910
*/

#include <iostream>
using namespace std;

int main()
{
  int num;
  int c = 1;
  cin >> num;
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
  return 0;
}