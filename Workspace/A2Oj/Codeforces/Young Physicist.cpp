#include<bits/stdc++.h>
using namespace std;

int a,b,c,i,j,k;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>i>>j>>k;
        a+=i,b+=j,c+=k;
    }
    //cout<<(d|e|f)<<endl;
    if(a|b|c)
        cout<< "NO\n";
    else
        cout<< "YES\n";
    return 0;
}

