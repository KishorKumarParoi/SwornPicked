#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        string s,s1;
        cin>>s;
        cin>>q;
        while(q--)
        {
            cin>>s1;
            int j=0,flag=0;
            int n=s1.size();
            int m=s.size();
            for(int i=0; i<m; i++)
            {
                if(s[i]==s1[j])
                    j++;
                else
                    j=0;
                if(j==n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"n\n";
            else
                cout<< "y\n";
        }
    }
    return 0;
}
