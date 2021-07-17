#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int x)
  {
    data = x;
    left = NULL;
    right = NULL;
  }
};

int search(int inorder[], int start, int end, int curr)
{
  for (int i = start; i <= end; i++)
  {
    if (inorder[i] == curr)
      return i;
  }
  return -1;
}

node *buildTree(int postorder[], int inorder[], int start, int end)
{

  if (start > end)
    return NULL;

  static int idx = 4;
  int curr = postorder[idx];
  idx--;
  node *n = new node(curr);

  if (start == end)
    return n;

  int pos = search(inorder, start, end, curr);
  n->right = buildTree(postorder, inorder, pos + 1, end);
  n->left = buildTree(postorder, inorder, start, pos - 1);

  return n;
}

void inOrder(node *root)
{
  if (root == NULL)
    return;
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

int main()
{
  int postorder[] = {1, 2, 4, 3, 5};
  int inorder[] = {4, 2, 1, 5, 3};
  node *root = buildTree(postorder, inorder, 0, 4);
  inOrder(root);
  return 0;
}
