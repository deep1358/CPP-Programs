#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Hello I am Deep Hello I";
  map<string, int> m;
  map<string, int>::iterator itr;
  for (int i = 0; i < s.length(); i++)
  {
    string word = "";
    int count = i;
    while (s[count] != ' ' and count < s.length())
    {
      word += s[count];
      count++;
    }
    i = count;
    if (m.find(word) != m.end())
      m[word]++;
    else
      m[word] = 1;
  }
  for (itr = m.begin(); itr != m.end(); itr++)
    cout << itr->first << " " << itr->second << endl;
  return 0;
}