#include <bits/stdc++.h>
using namespace std;

bool pytha_triplet(int x, int y, int z)
{
  if (x * x + y * y == z * z || x * x + z * z == y * y || x * x == y * y + z * z)
  {
    return true;
  }
  return false;
}

int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  if (pytha_triplet(x, y, z))
  {
    cout << "Pythagorean Triplet";
  }
  else
  {
    cout << "Not Pythagorean Triplet";
  }
  return 0;
}