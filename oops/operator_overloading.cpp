#include <bits/stdc++.h>
using namespace std;

class Comp
{
  int real, img;

public:
  Comp(int a = 0, int b = 0)
  {
    this->real = a;
    this->img = b;
  }
  Comp operator-(Comp c1)
  {
    Comp c3;
    c3.real = real - c1.real;
    c3.img = img - c1.img;
    return c3;
  }
  friend Comp Sum(Comp, Comp);
  void display()
  {
    cout << this->real << " + " << this->img << "i" << endl;
  }
};

Comp Sum(Comp c1, Comp c2)
{
  Comp c3;
  c3.real = c1.real + c2.real;
  c3.img = c1.img + c2.img;
  return c3;
}

int main()
{
  Comp c1(4, 7);
  Comp c2(2, 3);
  Comp c4 = c1 - c2;
  c4.display();
  Comp c3 = Sum(c1, c2);
  c3.display();

  return 0;
}