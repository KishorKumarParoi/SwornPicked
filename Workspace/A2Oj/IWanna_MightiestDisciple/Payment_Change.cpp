#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,S;
    cin>>t;
    while(t--)
    {
        int x,y,f=0;
        cin>>a>>b>>n>>S;
        if((a*n+b)==S)
        {
            cout<< "YES\n";
        }
        else
        {
            for(int i=0; i<=a; i++)
            {
                x=i*n;
                y=abs(S-x);
                //cout<<x<<" "<<y<<endl;
                if(y>b)
                    f=1;
                else
                    f=0;
            }
            if(f==0)
                cout<< "YES\n";
            else

                cout<< "NO\n";
        }
    }
    return 0;
}
