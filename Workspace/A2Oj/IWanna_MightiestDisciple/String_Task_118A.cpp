//2-11-19 2.13am
#include<bits/stdc++.h>
#include<cctype>

using namespace std;
int main()
{
    int i,j,ln;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        s[i]=(char)tolower(s[i]);
    }
    //cout<<s<<endl;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i'|| s[i]=='o'||s[i]=='u' || s[i]=='y')
            continue;
        else
            cout<<"."<<s[i];
    }
    cout<<endl;
    return 0;
}
