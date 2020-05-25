//17-12-19
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

struct node{
	
	int data;
	node *prev;
	node *next;
};

node *head,*temp,*newnode;

void createList(int data){
	
	newnode = new node();
	
	newnode->data=data;
	newnode->prev=0;
	newnode->next=0;
	
	if(head==0){
		
		head=temp=newnode;
	}
	else{
		
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	 
}

void pushFront(int data){
	
	newnode = new node();
	
	newnode->data=data;
	newnode->prev=0;
	
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}

void pushBack(int data){
	
    newnode = new node();
	newnode->data=data;
	
	temp=head;
	
	while(temp->next!=0){
		
		temp=temp->next;
	}
	
	newnode->prev=temp;
	temp->next=newnode;
	temp=newnode;
}

void pushAny(int data,int pos){
	
	newnode = new node();
	pos--;
	temp=head;
	
	newnode->data=data;
	
	while(pos--){
	   
	   temp=temp->next;
	}
	
	node *nxt=temp->next;
	
	newnode->prev = temp;
	newnode->next = temp->next;
	
	temp->next=newnode;
	nxt->prev=newnode;
	
	temp=newnode;
	
}

void reverse(){
	
	node *nextnode,*currnode,*tail;
	
	while(currnode!=0){
		
	   currnode=head;
	   nextnode=currnode->next;
	
	   currnode->next=currnode->prev;
	   currnode->prev=nextnode;
	   currnode=nextnode;
		
	}
	
	tail=currnode;
	
	currnode=head;
	head=tail;
	tail=currnode;
}

void printList(){
	
	temp=head;
	
	cout<< "Linked List : ";
	
	while(temp!=0){
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
    //open
    //close
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int data;
	head=0;
	
	while(scl(data)==1){
		
		createList(data);
	}
	
	printList();
	
	//inserting front
	pushFront(100);
	printList();
	
	//inserting last
	pushBack(53);
	printList();
    
	//inserting any position
	pushAny(4000,5);
	printList();
	
	//reversing 
	reverse();
	printList();
	
    return 0;
}


