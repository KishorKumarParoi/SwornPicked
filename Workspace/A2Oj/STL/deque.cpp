#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;


void member_functions()
{
    cout<<"back\n"<<endl;
    deque<int>mydeque;

    mydeque.pb(10);
    while(mydeque.back()!=1)
    {
        mydeque.pb(mydeque.back()-1);
    }

    for(auto it : mydeque)
        cout<<it<<" ";
    cout<<endl;


    cout<<"\nemplace \n"<<endl;
    auto it = mydeque.emplace(mydeque.begin()+1,100);
    mydeque.emplace(it,200);
    mydeque.emplace(mydeque.end()-1,300);


    cout<< "mydeque contains : ";
    for(auto x: mydeque)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\ninsert\n"<<endl;
    deque<int>dq;
    for(int i=1; i<6; i++)
        dq.pb(i);

    auto it1=dq.begin();         //1 2 3 4 5
    it1++;

    it1=dq.insert(it1,10);        // 1 10 2 3 4 5
    dq.insert(it1,2,20);         //  1 20 20 10 2 3 4 5
    it1=dq.begin()+2;

    vector<int>v(2,30);        // 1 20 30 30 20 10 2 3 4 5
    dq.insert(it1,all(v));

    cout<< "deque contains : ";

    for(auto x : dq)
        cout<<x<<" ";
    cout<<endl;

    // swap == operator= in deque

    cout<< "\n shrink to fit \n"<<endl;

    deque<int>kishor(100);
    cout<< "1.size : "<< kishor.size()<<endl;
    kishor.resize(10);
    cout<< "2.size : "<< kishor.size()<<endl;
    kishor.shrink_to_fit();
    cout<< "3.size : "<< kishor.size()<<endl;
}

int main()
{
    member_functions();
    return 0;
}
