//1-11-19 5.47am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ln=s.size();
        if(ln<=10)
            cout<<s<<endl;
        else
        {
            cout<<s[0]<<ln-2<<s[ln-1]<<endl;
        }
    }
    return 0;
}
