#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    int flag=0;
    for(int i=0,j=1; i<ln; i+=2,j+=2)
    {
        if(s[i]=='L' || s[j]=='R')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<< "No\n";
    else
        cout<< "Yes\n";

}
