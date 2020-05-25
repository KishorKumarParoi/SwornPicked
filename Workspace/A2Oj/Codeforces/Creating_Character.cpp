#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,e,i,j,n,cnt,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>e;
        if((a-b)>e && (a-b)>=0)
        {
            cout<<(a-b);
        }
        else if((b-a)<e && (b-a)>=0)
        {
            cout<<(b-a);
        }
        else if((a-b)==e)
        {
            cout<<e;
        }
        else if(a==b)
        {
            cout<<0;
        }
        else if((a-b)<e && (a-b)>=0)
        {
            cout<<e-(a-b)+1;
        }
        else if((b-a)>=e && (b-a)>=0)
        {
            cout<<0;
        }
        cout<<endl;
    }
}
