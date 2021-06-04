#include <iostream>
#include <math.h>
using namespace std;

void fibonacci(int n)
{
  int a = 0, b = 1;
  cout << a << " " << b << " ";
  for (int i = 1; i <= n - 2; i++)
  {
    int temp = a + b;
    cout << temp << " ";
    a = b;
    b = temp;
  }
}

int main()
{
  int num;
  cin >> num;
  fibonacci(num);
  return 0;
}