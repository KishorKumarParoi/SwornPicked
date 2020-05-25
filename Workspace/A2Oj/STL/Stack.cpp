//5-12-19
#include<bits/stdc++.h>
using namespace std;

#define MAX 100

typedef struct{
    
    int top;
    int data[MAX];
}Stack;


void push(Stack *s,int item){
    
    if(s->top < MAX){
        
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    
    else{
        
        cout<< "Stack Is Full\n";
    }
    
}

int pop(Stack *s){
    
    int item;
    
    if(s->top==0){
        
        cout<<"Stack IS Empty\n";
        return -1;
    }
    
    else{
        
        s->top=s->top-1;
        item=s->data[s->top];
        
    }
    
    return item ;
}



int main()
{
    
    Stack my_stack;
    
    int item;
    
    my_stack.top=0;
    
    push(&my_stack,1);
     push(&my_stack,2);
      push(&my_stack,3);
       push(&my_stack,4);
   
   pop(&my_stack);
   item=pop(&my_stack);
   
   
   printf("%d\n",item);
   
   
    return 0;
}

