#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node()
  {
    data = 0;
    left = NULL;
    right = NULL;
  }

  node(int x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
};

class BST
{
public:
  node *root;

  bool isEmpty()
  {
    if (root == NULL)
      return true;
    return false;
  }
};

int main()
{
  return 0;
}