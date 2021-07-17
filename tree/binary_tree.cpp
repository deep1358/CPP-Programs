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

void preorder(node *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(node *root)
{
  if (root == NULL)
    return;
  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}
void postorder(node *root)
{
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  cout << root->data << " ";
}

void inorderIterative(node *root)
{
  if (root == NULL)
    return;
  stack<node *> s;
  node *curr = root;
  while (curr != NULL || !s.empty())
  {
    while (curr != NULL)
    {
      s.push(curr);
      curr = curr->left;
    }
    curr = s.top();
    s.pop();
    cout << curr->data << " ";
    curr = curr->right;
  }
}
void preorderIterative(node *root)
{
  if (root == NULL)
    return;
  stack<node *> s;
  s.push(root);
  while (!s.empty())
  {
    node *curr = s.top();
    s.pop();
    cout << curr->data << " ";
    if (curr->right)
      s.push(curr->right);
    if (curr->left)
      s.push(curr->left);
  }
}
void postorderIterative(node *root)
{
  if (root == NULL)
    return;
  stack<node *> s;
  s.push(root);
  while (!s.empty())
  {
    node *curr = s.top();
    if (curr->right)
      s.push(curr->right);
    if (curr->left)
      s.push(curr->left);
    s.pop();
    cout << curr->data << " ";
  }
}

int main()
{
  node *root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
  preorder(root);
  cout << endl;
  inorder(root);
  cout << endl;
  postorder(root);
  cout << endl;
  inorderIterative(root);
  cout << endl;
  preorderIterative(root);
  cout << endl;
  postorderIterative(root);
  return 0;
}