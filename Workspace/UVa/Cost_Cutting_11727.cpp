#include<bits/stdc++.h>
using namespace std;
int mid(int a,int b,int c)
{
    int m;
    int i=(a>b)?a:b;
    int j=(i>c)?i:c;
    //printf("j=%d\n",j);
    if(a<b)
    {
        if(a<c)
        {
            m=a;
        }
        else
        {
            m=c;
        }
    }
    else
    {
        if(b<c)
        {
            m=b;
        }
        else
        {
            m=c;
        }
    }
   // printf("m=%d\n",m);
    if(a!=m && a!=j)
        return a;
    if(b!=m&&b!=j)
        return b;
    if(c!=m&&c!=j)
        return c;


}
int main()
{
    int a,b,c,o=1;
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        int k = mid(a,b,c);
        printf("Case %d: %d\n",o++,k);
    }
    return 0;
}

