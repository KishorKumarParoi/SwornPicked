#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==x)
            {
                s.replace(s.begin()+i,s.begin()+i+1,'1');
            }
        }
        cout<<s<<endl;
    }
}
