#include <bits/stdc++.h>
using namespace std;

class A
{
public:
  virtual void display()
  {
    cout << "A";
  }
};

class B
{
public:
  void display()
  {
    cout << "B";
  }
};

class C : public B, public A
{
public:
  void display()
  {
    cout << "C";
  }
};

int main()
{
  // A *a;
  // B b;
  // a = &b;
  // a->display();
  A *b;
  C c;
  b = &c;
  b->display();
  return 0;
}