#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k,i,x,cnt=0;
    cin>>n>>k;
    cin>>s;
    if(k==0)
    {
        cout<<s<<endl;
        return 0;
    }
    if(s.size()>1)
    {
        if(s[0]!='1')
        {
            s[0]='1';
            k-=1;
            for(int i=1; i<s.size() && k>0; i++)
            {
                s[i]='0';
                k--;
            }
            cout<<s<<endl;
            return 0;
        }
        if(s[0]=='1')
        {
            for(int i=1; i<s.size() && k>0; i++)
            {
                if(s[i]!='0')
                {
                    s[i]='0';
                    k--;
                }
            }
            cout<<s<<endl;
            return 0;
        }

    }
    else
        cout<<0<<endl;
    return 0;
}
