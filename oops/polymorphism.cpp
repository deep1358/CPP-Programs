#include <bits/stdc++.h>
using namespace std;

class a
{
public:
  void fun()
  {
    cout << "fun" << endl;
  }
  void fun(int i)
  {
    cout << i << endl;
  }
}; //Function Overloading

class Complex
{
private:
  int real, imag;

public:
  Complex()
  {
  }

  Complex(int r, int i)
  {
    real = r;
    imag = i;
  }

  Complex operator+(Complex &obj)
  {
    Complex res;
    res.imag = imag + obj.imag;
    res.real = real + obj.real;
    return res;
  }
  void display()
  {
    cout << real << " + i" << imag << endl;
  }
}; //Operator Overloading

class base
{

public:
  virtual void print()
  {
    cout << "Base Print" << endl;
  }
  void display()
  {
    cout << "Base Display" << endl;
  }
};

class derived : public base
{
public:
  void print()
  {
    cout << "Derived Print" << endl;
  }
  void display()
  {
    cout << "Derived Display" << endl;
  }
};

int main()
{
  // a a;
  // a.fun();
  // a.fun(1);
  // Complex c1(2, 3);
  // Complex c2(4, 5);
  // Complex c3 = c2 + c1;
  // c3.display();

  base *baseptr;
  derived d;
  baseptr = &d;

  baseptr->print();
  baseptr->display();

  return 0;
}