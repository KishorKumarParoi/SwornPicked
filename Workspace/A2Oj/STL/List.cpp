#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;

//member functions
void constructor()
{
    list<int>first;
    list<int>second(4,100);
    list<int>third(all(second));
    list<int>fourth(third);

    int myints[]= {16,2,77,29};
    list<int>fifth(myints, myints + sizeof(myints) / sizeof(int));

    cout<< "the contents of fifth element\n";
    for(auto x: fifth)
        cout<<x<<" ";
    cout<<endl;
}

void operatorAssign()
{
    list<int>first(3);
    list<int>second(5);
    second=first;

    first=list<int>();

    cout<< "Size of First : "<< (int) (first.size())<<endl;
    cout<< "Size of Second : "<< (int) (second.size())<<endl;
}

//Iterators
void iterators()
{
    // begin + end
    int myints[]= {75,23,65,42,13};
    list<int>mylist(myints,myints+sizeof(myints)/sizeof(int));

    cout<<"mylist forward\n";
    list<int> :: iterator it ;
    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    // reverse begin + reverse end

    cout<< "mylist1 backwards\n";
    list<int> mylist1;
    for(int i=1; i<=5; i++)
        mylist1.push_back(i);

    list<int>:: reverse_iterator rit;
    for(rit=mylist1.rbegin() ; rit!=mylist1.rend() ; ++rit)
        cout<<*rit<<" ";
    cout<<endl;

    //constant iterators

    cout<< "mylist contains\n";
    for(auto it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    //constant backward iterators

    cout<<"mylist1 contains\n";
    for(auto it=mylist1.rbegin(); it!=mylist1.rend(); it++)
        cout<<*it<<" ";
    cout<<endl;

}


void capacity()
{
    //empty

    list<int>mylist;
    int sum(0);
    for(int i=1; i<=10; i++)
        mylist.pb(i);

    while(!mylist.empty())
    {
        sum+=mylist.front();
        mylist.pop_front();
    }
    cout<< "total sum : ";
    cout<<sum<<endl;

    //size

    list <int> myints;
    cout<< "0.size : "<<myints.size()<<endl;
    for(int i=0; i<10; i++)
        myints.pb(i);
    cout<< "1.size : "<<myints.size()<<endl;

    myints.insert(myints.end(),10,10);
    cout<< "2.size : "<<myints.size()<<endl;
    for(auto x:myints)
        cout<<x<<" ";
    cout<<endl;

    myints.pop_back();
    cout<< "3.size : "<< myints.size()<<endl;

    cout<<myints.max_size()<<endl;

    //max_size

    unsigned int i;
    list<int>mylist1;
    cout<< "total elements : ";
    cin>>i;

    if(i<mylist1.max_size())
        mylist1.resize(i);
    else
        cout<< "exceeds limit\n";

}

void element_Access()
{
    //front
    list<int>mylist;
    mylist.pb(77);
    mylist.pb(22);
    mylist.pb(100);

    mylist.front() -= mylist.back();
    cout<< "mylist is now : "<<mylist.front()<<endl;

    //back

    list<int>mylist1;
    mylist1.pb(10);
    while(mylist1.back()!=0)
    {
        mylist1.pb(mylist1.back()-1);
    }

    cout<< "mylist1 contains : ";
    for(auto x: mylist1)
        cout<<x<<" ";
    cout<<endl;
}


void modifier()
{
    cout<<"assign\n"<<endl;

    list<int>first;
    list<int>second;

    first.assign(7,100);          //7 int with value 100
    second.assign(all(first));
    int myints[]= {1776,7,4};

    first.assign(myints,myints + 3);

    cout<< (int) (first.size()) <<endl;
    cout<< (int) (second.size())<<endl;

    cout<<"\nemplace_front\n"<<endl;

    list< pair<int,char> > kishor;
    kishor.emplace_front(10, 'a');
    kishor.emplace_front(20, 'b');
    kishor.emplace_front(30, 'c');

    cout<< "kishor contains : \n";
    for(auto x: kishor)
        cout<<x.first<< " , " <<x.second<<endl;
    cout<<endl;

    cout<<"\nemplace\n"<<endl;

    kishor.emplace(kishor.begin(), 100, 'x');
    kishor.emplace(kishor.end(), 200, 'y');

    cout<< "kishor contains\n";

    for(auto x: kishor )
        cout<<x.first<< " , "<<x.second<<endl;
    cout<<endl;

    cout<<"\nemplace_back\n"<<endl;

    kishor.emplace_back(10,'a');
    kishor.emplace_back(20,'b');
    kishor.emplace_back(30,'c');

    cout<< "\nkishor contains :\n";
    for(auto x: kishor)
        cout<<x.first<<" , " <<x.second<<endl;
    cout<<endl;


    cout<<"\npush_front\n"<<endl;

    list<int>mylist1(2,100);
    mylist1.push_front(200);
    mylist1.push_front(300);

    cout<< "mylist1 contains : ";
    for(auto x: mylist1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\npush_back\n"<<endl;

    int myint;
    cout<< "enter some integers : \n";
    do
    {
        cin>>myint;
        mylist1.push_back(myint);
    }
    while(myint);

    for(auto x: mylist1)
        cout<<x<<" ";
    cout<<endl;


    cout<<"\npop_back\n"<<endl;

    int sum(0);

    while(!mylist1.empty())
    {
        sum+=mylist1.back();    //front
        cout<<sum<<endl;
        mylist1.pop_back();       //front
    }
    cout<< "Sum : "<<sum<<endl;

    cout<<"\ninsert\n"<<endl;

    list<int> mylist;
    for(int i=1; i<=10; i++)
        mylist.pb(i);

    auto it=mylist.begin();
    ++it;
    mylist.insert(it,10);
    mylist.insert(it,2,20);
    --it;

    cout<<*it<<endl;

    vector<int>myvector(2,30);
    mylist.insert(it, all(myvector));

    cout<< "mylist contains : ";

    for(auto x: mylist)
        cout<<x<<" ";
    cout<<endl;


    cout<<"\nerase\n"<<endl;
    auto it2=mylist.begin();
    auto it1=mylist.begin();

    advance(it2,6);
    it1++;
    it1=mylist.erase(it1);
    it2=mylist.erase(it2);

    ++it1;
    --it2;

    mylist.erase(it1,it2);

    cout<< "mylist contains : ";
    for(auto x : mylist)
        cout<<x<< " ";
    cout<<endl;

    cout<< "\nSwap\n"<<endl;
    list<int>a(3,100);
    list<int>b(5,200);
    a.swap(b);

    cout<< "first contains : ";
    for(auto x: a)
        cout<<x<<" ";
    cout<<endl;

    cout<< "second contains : ";
    for(auto x : b)
        cout<<x<< " ";
    cout<<endl;


    cout<< "\nresize\n"<<endl;
    list<int>list1;
    for(int i=1; i<=10; i++)
        list1.pb(i);

    list1.resize(5);
    list1.resize(8,100);
    list1.resize(12);


    cout<< "list1 contains : ";
    for(auto x:list1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\nclear\n"<<endl;
    list1.clear();
    cout<< "after clearing list1 : ";
    cout<<list1.size()<<endl;
    list1.pb(100);
    list1.pb(200);

    cout<< "\nnow list1 contains : ";
    for(auto x: list1)
        cout<<x<<" ";
    cout<<endl;

}


void operations()
{
    cout<< "\nsplice\n"<<endl;
    list<int>list1,list2;

    for(int i=1; i<=4; i++)          // 1 2 3 4
        list1.pb(i);

    for(int i=1; i<=3; i++)
        list2.pb(i*10);               //10 20 30

    auto it=list1.begin();
    ++it;                                  // points to 2

    list1.splice(it,list2);            // 1 10 20 30 2 3 4 stills point to 2 (5th element)

    list2.splice(list2.begin(), list1,it);   // list1 : 1 10 20 30 3 4   list2 : 2 now it is invalid

    it=list1.begin();
    advance(it,3) ;                        //it point to 30


    list1.splice (list1.begin(), list1,it,list1.end());     //list1 : 30 3 4 1 10 20

    cout<< "list1 contains : ";
    for(auto x : list1)
        cout<<x<<" ";
    cout<<endl;

    cout<< "list2 contains : ";
    for(auto x : list2)
        cout<<x<<" ";
    cout<<endl;


    cout<<"\n remove\n"<<endl;
    list1.remove(30);
    list1.remove(1);

    for(auto x: list1)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\n Reverse\n"<<endl;
    list1.reverse();
    cout<< "reversing order : ";
    for(auto x : list1)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    operations();
    return 0;
}
