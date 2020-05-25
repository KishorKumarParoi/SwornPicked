//2-11-19 9.00pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
                i++;
            }
            else
            {
                cout<<2;
                i++;
            }
        }
        else
            cout<<0;
    }
    cout<<endl;
    return 0;
}
