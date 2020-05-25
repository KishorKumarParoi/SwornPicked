#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int bigmod(int a,int b)
{
    if(b==0)
        return 1;
    if(b%2==0)
    {
        int ret=bigmod(a,b/2);
        return ((ret%100)*(ret%100))%100;
    }
    else
        return ((a%100)*(bigmod(a,b-1))%100)%100;
}
int main()
{
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        if(a>3 && b>3)
         printf("%02d\n",bigmod(a,b));
    }
}
