//2-11-19 8.35am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n,cnt=0;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            cnt++;
    }
    if(cnt>1 && ((cnt==4) || (cnt==7)))
        cout<< "YES\n";
    else
        cout<< "NO\n";
    return 0;
}
