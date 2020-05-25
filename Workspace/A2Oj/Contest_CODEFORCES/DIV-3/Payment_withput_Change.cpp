//5-11-19 6.31am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,n,S;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>S;
        if(b<(S%n))
            cout<< "NO\n";
        else
        {
            if((a*n+b)>=S)
                cout<< "YES\n";
            else
                cout<< "NO\n";
        }
    }
    return 0;
}
