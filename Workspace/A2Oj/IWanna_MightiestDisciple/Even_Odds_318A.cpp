//5-11-19 7.33am
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i;
    cin>>n>>k;
    if(n%2)
    {
        long long x,y;
        x=(n+1)/2;
        if(k>x)
            y=(k-x)*2;
        else
            y=n-((x-k)*2);
        cout<<y<<endl;
    }
    else
    {
        long long x,y;
        x=(n+1)/2;
        if(k>x)
            y=((k-x)*2);
        else
            y=(n-1)-((x-k)*2);
        cout<<y<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    n=(n+1)/2;
    if(k>n)
    {
        cout<<2*(k-n)<<endl;
    }
    else
    {
        cout<<(2*k)-1<<endl;
    }
    return 0;
}
