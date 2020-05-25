//2-11-19 2.26am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j;
    cin>>a>>b;
    for(i=0; i<a.size(); i++)
    {
        a[i]=(char)tolower(a[i]);
    }

    for(i=0; i<b.size(); i++)
    {
        b[i]=(char)tolower(b[i]);
    }
    if(a==b)
        cout<<0<<endl;
    if(a>b)
        cout<<1<<endl;
    if(a<b)
        cout<<-1<<endl;
}
