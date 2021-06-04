#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node *pre;
  node(int val)
  {
    data = val;
    next = NULL;
    pre = NULL;
  }
};

void insertAtHead(node *&head, int val)
{
  node *n = new node(val);
  n->next = head;
  if (head != NULL)
    head->pre = n;
  head = n;
}

void insertAtTail(node *&head, int val)
{
  node *n = new node(val);
  node *temp = head;

  if (head == NULL)
  {
    insertAtHead(head, val);
    return;
  }

  while (temp->next != NULL)
    temp = temp->next;
  temp->next = n;
  n->pre = temp;
}

void deleteAtHead(node *&head)
{
  node *todelete = head;
  head = head->next;
  head->pre = NULL;
  delete todelete;
}

void deleteNode(node *&head, int pos)
{
  node *temp = head;
  int count = 1;

  if (pos == 1)
  {
    deleteAtHead(head);
    return;
  }

  while (temp != NULL && count != pos)
  {
    temp = temp->next;
    count++;
  }
  node *todelete = temp;
  temp->pre->next = temp->next;
  if (temp->next != NULL)
    temp->next->pre = temp->pre;
  delete todelete;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  node *head = NULL;
  insertAtTail(head, 1);
  insertAtTail(head, 2);
  insertAtTail(head, 3);
  insertAtHead(head, 4);
  display(head);
  // deleteNode(head, 2);
  // display(head);
  // deleteAtHead(head);
  // display(head);
  return 0;
}