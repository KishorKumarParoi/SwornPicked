#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,i;
        cin>>n;
        cin>>a>>b>>c;
        string s,str;
        cin>>s;
        int cnt=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='R' && b>=1)
            {
                b--;
                cnt++;
                str+="P";
            }
            if(s[i]=='P' && c>=1)
            {
                c--;
                cnt++;
                str+="S";
            }
            if(s[i]=='S' && a>=1)
            {
                a--;
                cnt++;
                str+="R";
            }
        }

        if(cnt<((n+1)/2))
            cout<<"NO";
        else
        {
            cout<< "YES\n";
            cout<<str;
            for(i=0; i<a; i++)
                cout<<"R";
            for(i=0; i<b; i++)
                cout<<"P";
            for(i=0; i<c; i++)
                cout<<"S";
        }
        cout<<endl;
    }
}
