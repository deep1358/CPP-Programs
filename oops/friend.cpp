#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
  int a = 9;
  int b = 9;
  int c = 9;
  friend int a(A);
  friend B;

public:
  virtual void display()
  {
    cout << "A";
  }
};

int a(A a)
{
  return a.a;
}

class B : public A
{
public:
  void display()
  {
    cout << "B";
  }
  void getA(A x)
  {
    cout << x.a << endl;
  }
  void getB(A x)
  {
    cout << x.b << endl;
  }
  void getC(A x)
  {
    cout << x.c << endl;
  }
};

int main()
{
  A b;
  cout << a(b) << endl;
  B c;
  c.getA(b);
  c.getB(b);
  c.getC(b);
  return 0;
}