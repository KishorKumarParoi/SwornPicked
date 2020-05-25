//2-11-19 8.53pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lwr=0,upr=0,i,j,n;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            lwr++;
        if(s[i]>='A' && s[i]<='Z')
            upr++;
    }
    if(upr<=lwr)
    {
        for(i=0; i<s.size(); i++)
        {
            char c;
            c=tolower(s[i]);
            putchar(c);
        }
    }
    else
    {
        for(i=0; i<s.size(); i++)
        {
            char c;
            c=toupper(s[i]);
            putchar(c);
        }
    }
    cout<<endl;
    return 0;
}
