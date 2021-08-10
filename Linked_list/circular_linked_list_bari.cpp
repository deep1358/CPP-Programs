#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    next = NULL;
  }
} * head;

void Display(Node *&head)
{
  Node *temp = head;
  if (temp->next == NULL)
  {
    cout << temp->data << endl;
    return;
  }
  do
  {
    cout << temp->data << " -> ";
    temp = temp->next;
  } while (temp != head);
  cout << head->data << endl;
}

void InsertTail(Node *&head, int data)
{
  Node *temp = head, *n = new Node(data);
  if (temp->next == NULL)
  {
    temp->next = n;
    n->next = temp;
    return;
  }
  while (temp->next != head)
    temp = temp->next;
  temp->next = n;
  n->next = head;
}

void InsertHead(Node *&head, int data)
{
  Node *temp = head, *n = new Node(data);
  n->next = head;
  do
    temp = temp->next;
  while (temp->next != head);
  temp->next = n;
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
  temp->next = n;
}

void Delete(Node *&head, int pos)
{
  Node *temp = head, *q = NULL;
  if (pos == 1)
  {
    do
      temp = temp->next;
    while (temp->next != head);
    temp->next = head->next;
    delete head;
    head = temp->next;
    return;
  }
  for (int i = 0; i < pos - 1; i++)
  {
    q = temp;
    temp = temp->next;
  }
  q->next = temp->next;
  delete temp;
}

int main()
{
  head = new Node(1);
  InsertTail(head, 2);
  InsertTail(head, 3);
  InsertHead(head, 4);
  InsertAt(head, 4, 5);
  Display(head);
  Delete(head, 1);
  Display(head);
  return 0;
}