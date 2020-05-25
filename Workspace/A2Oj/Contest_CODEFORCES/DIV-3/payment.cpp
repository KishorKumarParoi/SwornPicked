#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,a,b,n,S;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>S;
        if(S%n>b)
            cout<<"NO\n";
        else
        {
            if((a*n+b)<S)
                cout<<"NO\n";
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
