#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    for(int i=a.length(); i>=0; i--)
        b+=a[i];
    cout<<a<<endl;
    cout<<b<<endl;
    if(b==a)
        return 0;
    else
    {
        for(int j=2; j<b.length(); j++)
            cout<<b[j];
        cout<<endl;
    }
}
