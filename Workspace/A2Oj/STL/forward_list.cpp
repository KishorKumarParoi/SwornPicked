#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;

void member_functions()
{
    forward_list<int>kishor = {20,30,40,50};
    kishor.insert_after(kishor.before_begin(), 11);

    cout<< "kishor contains : ";      //11 20 30 40 50
    for(auto x: kishor)
        cout<<x <<" ";
    cout<<endl;

    cout<< "kishor contains after front operation: ";
    kishor.front()=1;
    for(auto x: kishor)                //1 20 30 40 50
        cout<<x<<" ";
    cout<<endl;

    array<int,5>arr= {1,2,3,4,5};

    auto it=kishor.insert_after(kishor.before_begin(),10);   // 10 1 20 30 40 50
    it=kishor.insert_after(it,2,20);                   //10 20 20 1 20 30 40 50

    it=kishor.insert_after(it,all(arr));       //10 20 20 1 2 3 4 5 1 20 30 40 50

    it=kishor.begin();
    it=kishor.insert_after(it, {1,2,3});      // 10 1 2 3 20 20 1 2 3 4 5 1 20 30 40 50

    for(auto x : kishor)
        cout<<x<<" ";
    cout<<endl;
}

int main()
{
    member_functions();
    return 0;
}

