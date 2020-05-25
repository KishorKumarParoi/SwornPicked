#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S="abc";
    int n,i,j;
    cin>>n;
    for(i=0;i<(1<<n);i++)
    {
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
                cout<<S[j]<< " ";
            cout<<endl;
        }
    }
}
