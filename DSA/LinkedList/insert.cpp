#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

void insertAtHead(Node *&head, int val)
{
  Node *newNode = new Node(val);
  newNode->next = head;
  head = newNode;
}

void deleteNode(Node *&head, int key)
{
  if (!head)
    return;

  if (head->data == key)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node *temp = head;
  Node *prev = NULL;

  while (temp && temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if (!temp)
    return;
  prev->next = temp->next;
  delete temp;
}

void display(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *head = NULL;
  insertAtHead(head, 10);
  insertAtHead(head, 20);
  insertAtHead(head, 30);
  display(head);

  deleteNode(head, 10);
  display(head);

  return 0;
}