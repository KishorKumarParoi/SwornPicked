#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,h;
    cin>>l>>h;
    int cnt=0;
    for(int i=l; i<=h; i++)
    {
        int x=0;
        int k=i;
        while(k>0)
        {
            x+=k%10;
            k/=10;
        }
        cout<<x<<endl;
    }
}
