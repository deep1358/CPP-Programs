#include <bits/stdc++.h>
using namespace std;

class base
{
public:
  base(int a)
  {
    cout << a << endl;
  }
};
class base1
{
public:
  base1(int b)
  {
    cout << b << endl;
  }
};
class base2
{
public:
  base2(int c)
  {
    cout << c << endl;
  }
};

class derived : public base, public base1, public base2
{
public:
  derived(int a, int b, int c, int d) : base(a), base1(b), base2(c)
  {
    cout << d << endl;
  }
};

int main()
{
  derived d(1, 2, 3, 4);
  return 0;
}