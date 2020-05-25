//6-4-20
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    //cin.tie(0);

    int T;
    cin>>T;

    while(T--)
    {
        int N,i,j;
        cin>>N;

        int a[110]= {0},x;

        for(i=1,j=1; i<=N; i++)
        {
            cin>>x;
            if(x==1)
            {
                a[j] = i;
                j++;
            }
        }

        /*
        for(i=1; i<j; i++)
            cout<<a[i] << " ";
        cout<<endl;

        cout<<"j = "<<j<<endl;
        */

        int f = 0;

        for(i=1; i<(j-1); i++)
        {
            if(f==1)
                break;

            int y = a[i+1] - a[i];

            // cout<<"y = "<<y<<endl;
            if(y<6)
                f=1;
        }

        (f==0) ? cout<< "YES\n" : cout<<"NO\n";

    }

    return 0;
}


