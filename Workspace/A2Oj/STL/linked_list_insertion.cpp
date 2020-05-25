//11-12-19
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define ll long long
#define uu first
#define vv second
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }

using namespace std;

class Node{
    
  public:
     int data;
     Node *next;
};


void push(Node** head_ref,int new_data){
    
    Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next= (*head_ref);
    
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data){
    
    if(prev_node==NULL){
        
        cout<<"Error\n";
        return;
    }
    
    Node *new_node= new Node();
    new_node->data=new_data;
    new_node->next= prev_node->next;
    
    prev_node->next = new_node;
}


void append(Node** head_ref,int new_data){
    
    Node *new_node = new Node();
    
    Node *tmp= (*head_ref);
    
    new_node->data=new_data;
    new_node->next=NULL;
    
    if(*head_ref==NULL){
        
        *head_ref=new_node;
        return;
    }
    
    while(tmp->next!=NULL){
        
        tmp=tmp->next;
    }
    
    tmp->next=new_node;
    return;
    
    
}

void printList(Node *node){
    
    while(node!=NULL){
        
        cout<<node->data<<" ";
        node=node->next;
    }
}

int main()
{
    //open
    //close
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
     /* Start with the empty list */
    Node* head = NULL;  
      
    // Insert 6. So linked list becomes 6->NULL  
    append(&head, 6);  
      
    // Insert 7 at the beginning.  
    // So linked list becomes 7->6->NULL  
    push(&head, 7);  
      
    // Insert 1 at the beginning.  
    // So linked list becomes 1->7->6->NULL  
    push(&head, 1);  
      
    // Insert 4 at the end. So  
    // linked list becomes 1->7->6->4->NULL  
    append(&head, 4);  
      
    // Insert 8, after 7. So linked  
    // list becomes 1->7->8->6->4->NULL  
    insertAfter(head->next, 8);  
      
    cout<<"Created Linked list is: ";  
    printList(head); 
    
    return 0;
}

