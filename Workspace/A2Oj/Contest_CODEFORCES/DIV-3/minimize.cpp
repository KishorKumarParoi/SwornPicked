#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector<int>v(n);
        for(i=0; i<n; i++)
            cin>>v[i];

        int pos=0;
        while(pos<n)
        {
            int nxt=min_element(v.begin()+pos, v.end()) - v.begin();
            int kishor=v[nxt];
            v.erase(v.begin()+nxt);

            v.insert(v.begin()+pos, kishor);

            if(pos==nxt)
                pos=nxt+1;
            else
                pos=nxt;

            //cout<<pos<<" "<<nxt<<" "<<kishor<<endl;

        }
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
