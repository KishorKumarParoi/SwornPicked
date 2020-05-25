//5-11-19 8.20pm
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{
    int q,n,i,j;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int pos=0;
        while(pos<n)
        {
            int mini=min_element(v.begin()+pos, v.end()) -v.begin();
            int kishor=v[mini];

            v.erase(v.begin() + mini);

            v.insert(v.begin() + pos, kishor);


            if(pos==mini)
                pos=mini+1;
            else
                pos=mini;

            // cout<<mini<<" "<<kishor<<" "<<pos<<endl;

        }
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}
