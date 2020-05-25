#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void push(int x,Node **phead)
{
    Node *new_node= new Node;
    new_node->data=x;
    new_node->next=*phead;
    *phead=new_node;
}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<< temp->data << " ";
        temp=temp->next;
    }
    cout<<endl;

}
int main()
{
    Node *Head=NULL;
    push(4,&Head);
    push(6,&Head);
    push(8,&Head);

    print(Head);
    return 0;
}
