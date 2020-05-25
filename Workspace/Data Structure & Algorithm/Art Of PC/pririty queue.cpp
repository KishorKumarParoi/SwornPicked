#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue <int> q;
    q.push(400);
    q.push(700);
    q.push(600);
    q.push(300);
    q.push(50);
    q.push(40);
    while(!q.empty())
    {
        int x;
        x=q.top();
        cout<<x<<endl;
        q.pop();
    }
}
