#include<bits/stdc++.h>
using namespace std;

int n,s,p,e,o;
int main()
{
    cin>>n;
    e=0,o=0,s=0;
    while(n--)
    {
        cin>>p;
        s+=p;
        (p%2) ? o++  :e++;
    }
     (s%2) ? cout<< o : cout<< e;
    cout<<endl;
}
