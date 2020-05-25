//5-11-19 7.11am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i;
    cin>>n;
    cin>>p;
    set<int>st;
    for(i=1; i<=p; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    cin>>q;
    for(i=1; i<=q; i++)
    {
        int y;
        cin>>y;
        st.insert(y);
    }
    if(st.size()==n)
        cout<< "I become the guy.\n";
    else
        cout<< "Oh, my keyboard!\n";
    return 0;
}
