#include <bits/stdc++.h>
using namespace std;

class A
{
public:
  virtual void display() = 0;
};

class B : public A
{
public:
  void display()
  {
    cout << "B";
  }
};

int main()
{
  A *a;
  B b;
  a = &b;
  a->display();
  return 0;
}