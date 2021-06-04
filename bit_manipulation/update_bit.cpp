#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int pos)
{
  return (n & ~(1 << pos));
}

int setBit(int n, int pos, int value)
{
  return (n | (value << pos));
}

int updateBit(int n, int pos, int value)
{
  clearBit(n, pos);
  return setBit(n, pos, value);
}

int main()
{
  cout << updateBit(5, 1, 1) << endl;
  return 0;
}