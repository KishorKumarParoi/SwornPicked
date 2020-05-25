//5-11-19 5.41am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l;
    string s;
    cin>>s;
    int cnt=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            cnt++;
            i+=2;
            continue;
        }
        else
        {
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B')
                cout<<s[i]<<" ";
            else
                cout<<s[i];
        }
    }
    cout<<endl;
}
