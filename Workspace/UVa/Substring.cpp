#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string s1,string s2)
{
    int m=s1.size();
    int n=s2.size();
    int i,j;
    for(i=0; i<=n-m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s2[i+j]!=s1[j])
                break;
        }
        if(j==m)
            return 1;
    }
    return 0;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int res=isSubstring(s1,s2);
    if(res)
        cout<< "y\n";
    else
        cout<< "n\n";
}
