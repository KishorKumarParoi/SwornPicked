#include<bits/stdc++.h>
#include<set>
using namespace std;
int n,m,i,k,t=1;
set<int>a,b;
main()
{
    char c;
    cin>>m>>n;
    for(i=1; i<=n*m; i++)
    {
        cin>>c;
        k++;
        if(k>n)
        {
            k=1;
            t++;
        }
        if(c=='S')
        {
            a.insert(k);
            b.insert(t);
        }
    }
    cout<<m*n-a.size()*b.size();
}
