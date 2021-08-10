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
  cout << "NULL <-> ";
  while (head != NULL)
  {
    cout << head->data << " <-> ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

void Display_Reverse(Node *head)
{
  cout << "NULL <-> ";
  while (head->next != NULL)
    head = head->next;
  while (head != NULL)
  {
    cout << head->data << " <-> ";
    head = head->pre;
  }
  cout << "NULL" << endl;
}

void InsertTail(Node *&head, int data)
{
  Node *temp = head, *n = new Node(data);
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = n;
  n->pre = temp;
}

void InsertHead(Node *&head, int data)
{
  Node *n = new Node(data);
  head->pre = n;
  n->next = head;
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
    temp = temp->next;
    delete head;
    temp->pre = NULL;
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

void Reverse(Node *&head)
{
  Node *temp = head, *temp1;
  while (temp != NULL)
  {
    temp1 = temp->next;
    temp->next = temp->pre;
    temp->pre = temp1;
    temp = temp->pre;
    if (temp != NULL and temp->next == NULL)
      head = temp;
  }
}

int main()
{
  Node *head = new Node(1);
  InsertTail(head, 2);
  InsertTail(head, 3);
  InsertHead(head, 0);
  InsertAt(head, 2, 7);
  InsertAt(head, 4, 8);
  Display(head);
  Reverse(head);
  Display(head);
  return 0;
}