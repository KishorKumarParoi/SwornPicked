//4-11-19 1.09am
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m,i;
    cin>>n>>m;
    for(i=0; i<15; i++)
    {
        if(a[i]==n)
        {
            if(a[i+1]==m)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<< "NO\n";
            }
            return 0;
        }
    }
}
