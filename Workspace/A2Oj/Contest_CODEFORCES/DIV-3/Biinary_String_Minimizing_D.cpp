#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,k,i;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        string s,res;
        int cnt=0;
        cin>>s;
        bool printed=false;

        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(cnt<=k)
                {
                    res+='0';
                    cout<<res<<endl;
                    k-=cnt;
                }
                else
                {
                    res+=string (cnt-k, '1');
                    cout<<res<<endl;
                    res+='0';
                    cout<<res<<endl;
                    res+=string (k,'1');
                    cout<<res<<endl;
                    res+=s.substr(i+1);
                    cout<<res<<endl;
                    printed=true;
                    break;
                }
            }
            else
            {
                cnt++;
            }
        }
        if(!printed)
        {
            res+=string(cnt,'1');
            cout<<res<<endl;
        }
    }
    return 0;
}
