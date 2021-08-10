#include <bits/stdc++.h>
using namespace std;

int count_words(string s)
{
  int count = 1;
  for (int i = 0; i < s.length(); i++)
    if (s[i] == ' ' and s[i - 1] != ' ')
      count++;
  return count;
}

int main()
{
  string s = "Hello    Deep";
  string str = s;
  for (int i = 0; i < s.length() / 2; i++)
  {
    char temp = s[i];
    s[i] = s[s.length() - i - 1];
    s[s.length() - 1 - i] = temp;
  }
  cout << s << endl;
  int words = count_words(str);
  string arr[words];
  stringstream ssin(str);
  int i = 0;
  while (ssin.good() && i < words)
    ssin >> arr[i++];
  for (int i = 0; i < words; i++)
  {
    for (int j = 0; j < arr[i].length() / 2; j++)
    {
      char temp = arr[i][j];
      arr[i][j] = arr[i][arr[i].length() - 1 - j];
      arr[i][arr[i].length() - 1 - j] = temp;
    }
  }
  for (auto i : arr)
    cout << i << " ";
  return 0;
}