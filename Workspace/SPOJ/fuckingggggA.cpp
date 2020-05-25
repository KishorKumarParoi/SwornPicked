#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    if(x%2==0)
    {
        for(int i=0; i<=x/2; i++)
        {
            if(s[i]!=s[x-i-1])
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
    }
    else
    {
        for(int i=0;i<x/2;i++)
        {
            if(s[i]!=s[x-1-i])
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
    }
    if(flag==1)
    {

    }
}
