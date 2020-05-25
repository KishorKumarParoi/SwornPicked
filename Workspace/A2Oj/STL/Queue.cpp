//5-12-19
#include<bits/stdc++.h>
using namespace std;

#define Size 5

typedef struct{
    
    int data[Size+1];
    int head,tail;
    
}Queue;


void enqueue(Queue *q,int item){
    
    if((q->tail+1) % (Size+1) == q->head){
        
        
        cout<< "Queue is Full\n";
        return;
    }
    
    q->data[q->tail] = item;
    q->tail = (q->tail+1)%(Size+1);
    
}


int dequeue(Queue *q){
    
    int item;
    
    if(q->tail==q->head){
        
        cout<<"Queue is Empty\n";
        return -1;
    }
    
    item=q->data[q->head];
    
    q->head=(q->head+1)%(Size+1);
    
    return item;
    
}

int main()
{
   
   Queue q;
   int item;
   
   q.head=0;
   q.tail=0;
   
   enqueue(&q,1);
   cout<<q.tail<<" "<<q.head<<endl;
  //enqueue(&q,2);
   enqueue(&q,3);
  // enqueue(&q,4);
   //enqueue(&q,7);
   enqueue(&q,5);
   
   item=dequeue(&q);
   
   cout<<item<<endl;
   
    return 0;
}

