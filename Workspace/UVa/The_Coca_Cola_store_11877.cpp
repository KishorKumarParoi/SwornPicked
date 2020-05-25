#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        c=0;
        while(n>=3)
        {
            n=n-3;
            c++;
            n++;
        }
        if(n==2)
        {
            c++;
            printf("%d\n",c);
        }
        else
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
