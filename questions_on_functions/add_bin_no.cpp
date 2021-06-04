#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
  int ans = 0;
  while (n > 0)
  {
    int temp = n % 10;
    ans = ans * 10 + temp;
    n /= 10;
  }
  return ans;
}

void add_bin(int n1, int n2)
{
  int num = 0;
  int pre_carry = 0;
  while (n1 > 0 && n2 > 0)
  {
    if (n1 % 2 == 0 && n2 % 2 == 0)
    {
      num = num * 10 + pre_carry;
      pre_carry = 0;
    }
    else if ((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1))
    {
      if (pre_carry == 1)
      {
        num = num * 10 + 0;
        pre_carry = 1;
      }
      else
      {
        num = num * 10 + 1;
        pre_carry = 0;
      }
    }
    else
    {
      num = num * 10 + pre_carry;
      pre_carry = 1;
    }
    n1 /= 10;
    n2 /= 10;
  }
  while (n1 > 0)
  {
    if (pre_carry == 1)
    {
      if (n1 % 2 == 1)
      {
        num = num * 10 + 0;
        pre_carry = 1;
      }
      else
      {
        num = num * 10 + 1;
        pre_carry = 0;
      }
    }
    else
    {
      num = num * 10 + (n1 % 2);
    }
    n1 /= 10;
  }
  while (n2 > 0)
  {
    if (pre_carry == 1)
    {
      if (n2 % 2 == 1)
      {
        num = num * 10 + 0;
        pre_carry = 1;
      }
      else
      {
        num = num * 10 + 1;
        pre_carry = 0;
      }
    }
    else
    {
      num = num * 10 + (n2 % 2);
    }
    n2 /= 10;
  }
  if (pre_carry == 1)
  {
    num = num * 10 + 1;
  }
  num = reverse(num);
  cout << num;
}

int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  add_bin(n1, n2);
  return 0;
}