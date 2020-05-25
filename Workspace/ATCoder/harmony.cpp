#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    //cout<<b<<" "<<a<<endl;
    long long x=b-a;
    //cout<<x<<endl;
    //cout<<a+x<<" "<<b-x<<endl;
    if((a+x/2)==(b-x/2))
        cout<<a+x/2<<endl;
    else
        cout<< "IMPOSSIBLE"<<endl;
}
