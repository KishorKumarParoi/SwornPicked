#include<bits/stdc++.h>
using namespace std;

int trailing_zero(int n)
{
    int k=5;
    int cnt=0;
    while(k<=n)
    {
        cnt+=(n/k);
        k*=5;
    }
    return cnt;
}
int main()
{
    int cnt=0;
    for(int i=1000000000; i>=1; i--)
    {
        if(trailing_zero(i)>=100000000)
            cout<<(i)<<" = "<<trailing_zero(i)<<endl;
        else
            continue;
    }
    cout<<endl;
}
