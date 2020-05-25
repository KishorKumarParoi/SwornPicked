#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;

void member_functions()
{
    priority_queue<int>pq;
    /*
    pq.emplace("Kishor");
    pq.emplace("kumar");
    pq.emplace("paroi");
    pq.emplace("kishor");
    pq.emplace("Kumar");
    pq.emplace("Paroi");

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    */
    pq.push(30);
    pq.push(100);
    pq.push(35);
    pq.push(40);
    //pq.push("PQ");

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

}

int main()
{
    member_functions();
    return 0;
}
