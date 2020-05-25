//2-11-19 8.23pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>n>>t;
    string s;
    cin>>s;
    for(i=1; i<=t; i++)
    {
        for(int j=0; j<s.size()-1; j++)
        {
            if(s[j+1]=='G' && s[j]== 'B')
            {
                swap(s[j],s[j+1]);
                j++;
            }
        }
    }
    cout<<s<<endl;
}
