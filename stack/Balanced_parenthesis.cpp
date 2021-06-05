#include <bits/stdc++.h>
using namespace std;

bool isBalancedParenthesis(string s)
{
  stack<char> st;
  bool ans = true;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == '{' || s[i] == '[' || s[i] == '(')
      st.push(s[i]);
    else if (s[i] == ')')
    {
      if (!st.empty() and st.top() == '(')
        st.pop();
      else
      {
        ans = false;
        break;
      }
    }
    else if (s[i] == ']')
    {
      if (!st.empty() and st.top() == '[')
        st.pop();
      else
      {
        ans = false;
        break;
      }
    }
    else if (s[i] == '}')
    {
      if (!st.empty() and st.top() == '{')
        st.pop();
      else
      {
        ans = false;
        break;
      }
    }
    else
    {
      ans = false;
      break;
    }
  }
  if (!st.empty())
    return false;
  return ans;
}

int main()
{
  cout << isBalancedParenthesis("([{}])}");
  return 0;
}