#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b,c,d,l,r;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c>>d;
        if(a!=c)
            cout<<a<<" "<<c<<endl;
        else
            cout<<a+1<<" "<<c<<endl;
    }
    return 0;
}
