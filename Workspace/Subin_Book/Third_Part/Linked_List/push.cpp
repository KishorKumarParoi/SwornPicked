#include <iostream>

using namespace std;

struct Node
{
  int Data;
  Node *Next;
};

void push(int x, Node **pHead)
{
  Node *new_node = new Node;
  new_node->Data = x;
  new_node->Next = *pHead;
  *pHead = new_node;
}

void print(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->Data << " ";
    temp = temp->Next;
  }
  cout << endl;
}

int main()
{
  Node *Head = NULL;

  push(4, &Head);
  push(8, &Head);
  push(9, &Head);

  print(Head);
  return 0;
}
