#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;
    for(int i=0; i<n; i++)
    {
        if(s[i]==s[k-1])
            cout<<s[i];
        else
            cout<<"*";
    }
    cout<<"\n";
    return 0;
}
