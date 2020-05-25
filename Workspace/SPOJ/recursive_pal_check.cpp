#include<bits/stdc++.h>
using namespace std;

int rec_pal(string s,int b,int e)
{
    if(b>e)
        return 1;
    if(s[b]!=s[e])
        return 0 ;
    return rec_pal(s,b+1,e-1);
}
int main()
{
    string s;
    cin>>s;
    int e=s.length();
    int result = rec_pal(s,0,e-1);
    cout<<result<<endl;
    return 0;
}

