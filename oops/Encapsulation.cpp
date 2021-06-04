#include <bits/stdc++.h>
using namespace std;

class en
{
public:
  void a()
  {
    cout << "Public";
  }

private:
  void b()
  {
    cout << "Private";
  }
};

int main()
{

  en e;
  e.a();
  // e.b();

  return 0;
}