#include <bits/stdc++.h>
using namespace std;

template <class T>
T Min(T x, T y)
{
  return x >= y ? y : x;
}

float Find_Angle(int h, int m)
{
  if (h > 24 || m > 60 || h < 0 || m < 0)
  {
    cout << "Wrong Input" << endl;
    return -1;
  }
  if (h >= 12)
    h -= 12;
  if (m == 0)
    return h * 30;
  if (m == 60)
    return Min((360 - (h + 1) * 30), (h + 1) * 30);
  float temp = ((float(m) / 5) * 30) - (float(m) * .5);
  float temp1 = h * 30;
  float temp2 = fabs(temp1 - temp);
  return Min((360 - temp2), temp2);
}

int main()
{
  cout << Find_Angle(8, 38);
  return 0;
}