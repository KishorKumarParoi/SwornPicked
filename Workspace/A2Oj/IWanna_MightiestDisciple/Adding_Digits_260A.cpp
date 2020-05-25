//2-11-19 4.34am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,i;
    cin>>a>>b>>n;
    for(i=0; i<10; i++)
    {
        if((a*10+i)%b==0)
        {
            cout<<a<<i;
            for(int j=0; j<n-1; j++)
            {
                cout<<0;
            }
            cout<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
