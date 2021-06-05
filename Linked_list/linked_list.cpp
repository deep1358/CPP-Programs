#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};

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

void insertAtTail(node *&head, int val)
{
  node *n = new node(val);

  if (head == NULL)
  {
    head = n;
    return;
  }

  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void insertAtHead(node *&head, int val)
{
  node *n = new node(val);
  n->next = head;
  head = n;
}

bool searchNode(node *&head, int key)
{
  node *temp = head;
  while (temp != NULL)
  {
    if (key == temp->data)
      return true;
    temp = temp->next;
  }
  return false;
}

void deleteNode(node *&head, int val)
{
  node *temp = head;

  if (head == NULL)
  {
    return;
  }

  if (head->next == NULL)
  {
    node *todelete = temp;
    head = temp->next;
    delete head;
    return;
  }

  if (temp->data == val)
  {
    node *todelete = temp;
    head = temp->next;
    delete todelete;
    return;
  }

  while (temp->next->data != val)
    temp = temp->next;
  node *todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;
}

node *reverseList(node *&head)
{
  node *current = head;
  node *pre = NULL;
  node *next;
  while (current != NULL)
  {
    next = current->next;
    current->next = pre;
    pre = current;
    current = next;
  }
  return pre;
}

node *recursiveReverseList(node *&head)
{

  if (head == NULL || head->next == NULL)
    return head;

  node *newHead = recursiveReverseList(head->next);
  head->next->next = head;
  head->next = NULL;
  return newHead;
}

node *reverseK(node *&head, int k)
{
  node *pre = NULL;
  node *current = head;
  node *next;

  int count = 0;
  while (current != NULL && count < k)
  {
    next = current->next;
    current->next = pre;
    pre = current;
    current = next;
    count++;
  }

  if (next != NULL)
    head->next = reverseK(next, k);

  return pre;
}

void makeCycle(node *&head, int pos)
{
  node *temp = head;
  node *startNode;
  int count = 1;
  while (temp->next != NULL)
  {
    if (count == pos)
    {
      startNode = temp;
    }
    temp = temp->next;
    count++;
  }
  temp->next = startNode;
}

bool detectCycle(node *&head)
{
  node *slow = head;
  node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;

    if (fast == slow)
      return true;
  }
  return false;
}

void removeCycle(node *&head)
{
  node *slow = head;
  node *fast = head;

  do
  {
    slow = slow->next;
    fast = fast->next->next;
  } while (slow != fast);

  fast = head;
  while (slow->next != fast->next)
  {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
}

int length(node *&head)
{
  int count = 0;
  node *temp = head;
  while (temp != NULL)
  {
    temp = temp->next;
    count++;
  }
  return count;
}

node *kAppend(node *&head, int k)
{
  node *newHead;
  node *newTail;
  node *tail = head;
  int l = length(head);
  int count = 1;
  k = k % l;
  while (tail->next != NULL)
  {
    if (count == l - k)
      newTail = tail;
    if (count == l - k + 1)
      newHead = tail;
    tail = tail->next;
    count++;
  }
  newTail->next = NULL;
  tail->next = head;
  return newHead;
}

void intersect(node *&head1, node *&head2, int pos)
{
  node *temp1 = head1;
  pos--;
  while (pos--)
  {
    temp1 = temp1->next;
  }
  node *temp2 = head2;
  while (temp2->next != NULL)
    temp2 = temp2->next;
  temp2->next = temp1;
}

int intersection(node *&head1, node *&head2)
{
  int l1 = length(head1);
  int l2 = length(head2);

  int d = 0;
  node *ptr1, *ptr2;
  if (l1 > l2)
  {
    d = l1 - l2;
    ptr1 = head1;
    ptr2 = head2;
  }
  else
  {
    d = l2 - l1;
    ptr1 = head2;
    ptr2 = head1;
  }
  while (d)
  {
    ptr1 = ptr1->next;
    if (ptr1 == NULL)
    {
      return -1;
    }
    d--;
  }
  while (ptr1 != NULL && ptr2 != NULL)
  {
    if (ptr1 == ptr2)
      return ptr1->data;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  return -1;
}

void sort(node *&head)
{
  node *i, *j;
  for (i = head; i != NULL; i = i->next)
  {
    for (j = i->next; j != NULL; j = j->next)
    {
      if (i->data > j->data)
      {
        int temp = i->data;
        i->data = j->data;
        j->data = temp;
      }
    }
  }
}

node *merge(node *&head1, node *&head2)
{
  node *p1 = head1;
  node *p2 = head2;
  node *dummyNode = new node(-1);
  node *p3 = dummyNode;
  while (p1 != NULL && p2 != NULL)
  {
    if (p1->data < p2->data)
    {
      p3->next = p1;
      p1 = p1->next;
    }
    else
    {
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }
  while (p1 != NULL)
  {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }
  while (p2 != NULL)
  {
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
  }
  return dummyNode->next;
}

node *recursiveMegre(node *&head1, node *&head2)
{

  if (head1 == NULL)
    return head2;
  if (head2 == NULL)
    return head1;

  node *result;
  if (head1->data < head2->data)
  {
    result = head1;
    result->next = recursiveMegre(head1->next, head2);
  }
  else
  {
    result = head2;
    result->next = recursiveMegre(head1, head2->next);
  }
  return result;
}

void evenAfterOdd(node *&head)
{
  node *odd = head;
  node *even = head->next;
  node *evenStart = even;
  while (odd->next != NULL && even->next != NULL)
  {
    odd->next = even->next;
    odd = odd->next;
    even->next = odd->next;
    even = even->next;
  }
  odd->next = evenStart;
  if (odd->next != NULL)
  {
    even->next = NULL;
  }
}

int main()
{
  node *head = NULL;
  insertAtTail(head, 3);
  insertAtTail(head, 2);
  insertAtTail(head, 1);
  insertAtHead(head, 4);
  // insertAtHead(head, 5);
  // insertAtHead(head, 6);
  display(head);
  // cout << endl
  //  << searchNode(head, 5);
  // deleteNode(head, 1);
  // display(head);
  // node *newList = reverseList(head);
  // node *newList = recursiveReverseList(head);
  // display(newList);
  // node *newList = reverseK(head, 3);
  // display(newList);
  // makeCycle(head, 2);
  // display(head);
  // cout << detectCycle(head) << endl;
  // removeCycle(head);
  // cout << detectCycle(head) << endl;
  // display(head);
  // cout << length(head) << endl;
  // node *newList = kAppend(head, 2);
  // display(newList);
  // node *head1 = NULL, *head2 = NULL;
  // insertAtTail(head1, 1);
  // insertAtTail(head1, 4);
  // insertAtTail(head1, 5);
  // insertAtTail(head1, 7);
  // insertAtTail(head2, 2);
  // insertAtTail(head2, 3);
  // insertAtTail(head2, 6);
  // intersect(head1, head2, 3);
  // display(head1);
  // display(head2);
  // cout << intersection(head1, head2) << endl;
  // node *newHead = merge(head1, head2);
  // display(newHead);
  // node *newHead = recursiveMegre(head1, head2);
  // display(newHead);
  // evenAfterOdd(head);
  // display(head);
  // sort(head);
  // display(head);

  return 0;
}