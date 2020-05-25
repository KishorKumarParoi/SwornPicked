#include<bits/stdc++.h>

using namespace std;
string s,b;
int ans;

int main()
{
    cin>>s>>b;
    ans=0;
    for(int i=0; i<s.size(); ++i)
    {
        if (s[i]!=b[i])
        {
            ans++;
        }
    }
    sort(s.begin(),s.end());
    // cout<<s<<endl;
    sort(b.begin(),b.end());
    // cout<<b<<endl;
    if(s==b && ans==2 )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}



