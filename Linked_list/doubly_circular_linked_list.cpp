#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *pre;
  Node(int data)
  {
    this->data = data;
    pre = next = NULL;
  }
} * head;

void Display(Node *head)
{
  Node *temp = head;
  if (temp->next == NULL)
  {
    cout << temp->data << " <-> NULL" << endl;
    return;
  }
  do
  {
    cout << temp->data << " <-> ";
    temp = temp->next;
  } while (temp != head);
  cout << temp->data << endl;
}

void Display_Reverse(Node *head)
{
  Node *temp = head;
  do
  {
    temp = temp->pre;
    cout << temp->data << " <-> ";
  } while (temp != head);
  cout << head->pre->data << endl;
}

void InsertTail(Node *&head, int data)
{
  Node *n = new Node(data);
  if (head->next == NULL)
  {
    head->next = n;
    head->pre = n;
    n->next = head;
    n->pre = head;
    return;
  }
  n->pre = head->pre;
  n->next = head;
  head->pre->next = n;
  head->pre = n;
}

void InsertHead(Node *&head, int data)
{
  Node *n = new Node(data);
  n->pre = head->pre;
  n->next = head;
  head->pre->next = n;
  head->pre = n;
  head = n;
}

void InsertAt(Node *&head, int pos, int data)
{
  if (pos == 0)
    return InsertHead(head, data);
  Node *temp = head, *n = new Node(data);
  for (int i = 0; i < pos - 1; i++)
    temp = temp->next;
  n->next = temp->next;
  n->pre = temp;
  if (temp->next)
    temp->next->pre = n;
  temp->next = n;
}

void Delete(Node *&head, int pos)
{
  Node *temp = head;
  if (pos == 1)
  {
    temp->pre->next = temp->next;
    temp->next->pre = temp->pre;
    temp = temp->next;
    delete head;
    head = temp;
    return;
  }
  else
  {
    for (int i = 0; i < pos - 1; i++)
      temp = temp->next;

    temp->pre->next = temp->next;
    if (temp->next)
      temp->next->pre = temp->pre;
    delete temp;
  }
}

int main()
{
  Node *head = new Node(1);
  InsertTail(head, 2);
  InsertTail(head, 3);
  InsertTail(head, 4);
  InsertHead(head, 0);
  InsertAt(head, 0, 7);
  InsertAt(head, 2, 8);
  Display(head);
  Display_Reverse(head);
  return 0;
}