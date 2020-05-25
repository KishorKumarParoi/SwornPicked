#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s,str;
        cin>>s;
        vector<int>v;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
                v.push_back(i);
        }
        sort(v.begin(),v.end());

        int cnt=0;
        int f=0;
        for(i=0; i<v.size(); i++)
        {
            for(int j=v[i]; j>0; j--)
            {
                swap(s[j],s[j-1]);
                cnt++;
                if(cnt==k)
                {
                    cout<<s<<endl;
                    f=1;
                    break;;
                }
            }
        }
        if(f==0)
            cout<<s<<endl;
    }
}

