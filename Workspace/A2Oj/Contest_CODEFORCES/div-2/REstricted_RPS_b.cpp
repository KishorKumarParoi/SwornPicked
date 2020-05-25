#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,n,i,j,res,ans,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c;
        string s,kishor;
        cin>>s;

        vector<int>count(26);
        for(char x: s)
            count[x-'A']++;

        int wins=min(a,count['S'-'A']) +min(b,count['R'-'A']) + min(c,count['P'- 'A']);

        if(2*wins < n)
        {
            cout<< "NO"<<endl;
            continue;
        }

        cout<< "YES"<<endl;

        for(i=0; i<n; i++)
        {
            if(s[i]=='R' && b)
            {
                b--;
                kishor+='P';
            }
            else if(s[i]=='P' && c)
            {
                c--;
                kishor+='S';
            }
            else if(s[i]=='S' && a)
            {
                a--;
                kishor+='R';
            }
            else
            {
                kishor+='_';
            }
        }

        cout<<kishor<<endl;

        for(i=0; i<n; i++)
        {
            if(kishor[i]!='_')
                continue;

            if(a)
            {
                kishor[i]='R';
                a--;
            }

            else if(b)
            {
                kishor[i]='P';
                b--;
            }
            else
            {
                kishor[i]='S';
                c--;
            }

        }
        cout<<kishor<<endl;
    }
    return 0;
}
