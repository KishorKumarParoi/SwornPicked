#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d %d",&n,&m);
       r=(n/3)+(m/3);
       printf("%d\n",r);
    }
    return 0;
}
