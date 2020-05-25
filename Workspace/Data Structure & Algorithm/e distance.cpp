#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,q=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s[0]=='-' || s[0]=='0' )
            printf("Case %lld: %s isnot a valid result\n",++q,s);
        else
            printf("Case %lld: %s is a valid result\n",++q,s);

    }
    return 0;
}
