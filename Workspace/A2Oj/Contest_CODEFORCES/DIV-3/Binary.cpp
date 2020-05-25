#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,i;
    long long k;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        string s,kishor;
        cin>>s;

        bool printed=false;

        int cnt=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                if(cnt<=k)
                {
                    kishor+='0';
                    k-=cnt;
                }
                else
                {
                    kishor+=string(cnt-k, '1');
                    kishor+='0';
                    kishor+=string(k, '1');
                    kishor+=s.substr(i+1);
                    printed=true;
                    cout<<kishor<<endl;
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
            kishor+=string(cnt, '1');
            cout<<kishor<<endl;
        }
    }
    return 0;
}
