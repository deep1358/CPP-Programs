#include <bits/stdc++.h>
using namespace std;

class Node;

int Count_Node(Node *);

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
};

void Display(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ->"
         << " ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

void Recursive_Display(Node *head)
{
  if (head == NULL)
  {
    cout << "NULL";
    return;
  }
  else
  {
    cout << head->data << " -> ";
    Recursive_Display(head->next);
  }
}

void Display_Reverse_Recursive(Node *head)
{
  if (head != NULL)
  {
    Display_Reverse_Recursive(head->next);
    cout << head->data << " -> ";
  }
}

void InsertHead(Node *&head, int data)
{
  Node *n = new Node(data);
  n->next = head;
  head = n;
}

void InsertTail(Node *&head, int data)
{
  Node *n = new Node(data);
  if (head == NULL)
  {
    head = n;
    return;
  }
  Node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = n;
}

void InsertAt(Node *&head, int pos, int data)
{
  Node *n = new Node(data);
  if (head == NULL)
  {
    head = n;
    return;
  }
  if (pos == 0)
  {
    InsertHead(head, data);
    return;
  }
  if (Count_Node(head) + 1 == pos)
  {
    InsertTail(head, data);
    return;
  }
  Node *temp = head;
  for (int i = 0; i < pos - 1; i++)
    temp = temp->next;
  n->next = temp->next;
  temp->next = n;
}

void Insert_Sorted(Node *&head, int data)
{
  Node *n = new Node(data);
  Node *temp = head, *q;
  if (temp->data > data)
  {
    n->next = head;
    head = n;
    return;
  }
  while (temp != NULL)
  {
    if (temp->data > data)
      break;
    q = temp;
    temp = temp->next;
  }
  q->next = n;
  n->next = temp;
}

int Count_Node(Node *head)
{
  int count = 0;
  while (head != NULL)
  {
    count++;
    head = head->next;
  }
  return count;
}

int Count_Node_Recursive(Node *head)
{
  if (head == NULL)
    return 0;
  return Count_Node_Recursive(head->next) + 1;
}

int Sum_Of_All_Nodes(Node *head)
{
  int sum = 0;
  while (head != NULL)
  {
    sum += head->data;
    head = head->next;
  }
  return sum;
}

int Sum_Of_All_Nodes_Recursive(Node *head)
{
  if (head == NULL)
    return 0;
  return Sum_Of_All_Nodes_Recursive(head->next) + head->data;
}

int Max_Node(Node *head)
{
  int max = INT_MIN;
  while (head != NULL)
  {
    if (head->data > max)
      max = head->data;
    head = head->next;
  }
  return max;
}

int Max_Node_Recursive(Node *head)
{
  if (head == NULL)
    return INT_MIN;
  int max = Max_Node_Recursive(head->next);
  return max < head->data ? head->data : max;
}

int Search(Node *head, int key)
{
  int count = 0;
  while (head != NULL)
  {
    if (head->data == key)
      return count;
    head = head->next;
    count++;
  }
  return -1;
}

int Search_Recursive(Node *head, int key)
{
  static int count = 0;
  if (head == NULL)
    return -1;
  if (head->data == key)
    return count;
  count++;
  return Search_Recursive(head->next, key);
}

int Search_Move_To_Head(Node *&head, int key)
{
  int count = 0;
  Node *temp = head, *q;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      q->next = temp->next;
      temp->next = head;
      head = temp;
      return count;
    }
    q = temp;
    temp = temp->next;
    count++;
  }
  return -1;
}

void Delete(Node *&head, int pos)
{
  Node *temp = head, *q;
  if (pos == 1)
  {
    head = temp->next;
    delete temp;
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

bool Is_Sorted(Node *head)
{
  int max = INT_MIN;
  while (head != NULL)
  {
    if (max > head->data)
      return false;
    max = head->data;
    head = head->next;
  }
  return true;
}

void Remove_Duplicates_Sorted(Node *&head)
{
  Node *temp = head->next, *q = head;
  while (temp != NULL)
  {
    if (q->data != temp->data)
    {
      q = temp;
      temp = temp->next;
    }
    else
    {
      q->next = temp->next;
      delete temp;
      temp = q->next;
    }
  }
}

void Reverse_List_By_Elements(Node *&head)
{
  int count = Count_Node(head), a[count], i = 0;
  Node *temp = head;
  while (temp->next != NULL)
  {
    a[i++] = temp->data;
    temp = temp->next;
  }
  a[i] = temp->data;
  temp = head;
  while (count > 0)
  {
    temp->data = a[i--];
    temp = temp->next;
    count--;
  }
}

void Reverse_List_By_Links(Node *&head)
{
  Node *temp = head, *q = NULL, *r = NULL;
  while (temp != NULL)
  {
    r = q;
    q = temp;
    temp = temp->next;
    q->next = r;
  }
  head = q;
}

void Reverse_List_By_Links_Recursive(Node *q, Node *&head)
{
  static Node *temp = head;
  if (temp != NULL)
  {
    Reverse_List_By_Links_Recursive(temp, temp->next);
    temp->next = q;
  }
  else
    head = q;
}

void Concate_List(Node *&head, Node *head1)
{
  Node *temp = head;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = head1;
}

Node *Merge_List(Node *head, Node *head1)
{
  Node *f = head, *s = head1, *t, *l, *head3;
  if (f->data < s->data)
  {
    t = l = head3 = f;
    f = f->next;
    l->next = NULL;
  }
  else
  {
    t = l = head3 = s;
    s = s->next;
    l->next = NULL;
  }
  while (f != NULL and s != NULL)
  {
    if (f->data < s->data)
    {
      l->next = f;
      l = f;
      f = f->next;
      l->next = NULL;
    }
    else
    {
      l->next = s;
      l = s;
      s = s->next;
      l->next = NULL;
    }
  }
  if (f != NULL)
    l->next = f;
  if (s != NULL)
    l->next = s;
  return head3;
}

void MakeCycle(Node *&head, int pos)
{
  Node *temp = head, *cycle;
  int count = 0;
  while (temp->next != NULL)
  {
    count++;
    if (pos == count)
      cycle = temp;
    temp = temp->next;
  }
  temp->next = cycle;
}

bool DetectCycle(Node *head)
{
  Node *s = head, *f = head;
  while (f != NULL and f->next != NULL)
  {
    s = s->next;
    f = f->next->next;
    if (s == f)
      return true;
  }
  return false;
}

void RemoveCycle(Node *head)
{
  if (DetectCycle(head))
  {
    Node *s = head, *f = head;
    do
    {
      s = s->next;
      f = f->next->next;
    } while (f != s);
    f = head;
    while (f->next != s->next)
    {
      f = f->next;
      s = s->next;
    }
    s->next = NULL;
  }
}

int main()
{
  Node *head = new Node(1);
  InsertTail(head, 3);
  InsertTail(head, 5);
  InsertTail(head, 8);
  InsertTail(head, 2);
  InsertTail(head, 4);
  InsertTail(head, 15);
  InsertTail(head, 16);
  Display(head);

  return 0;
}