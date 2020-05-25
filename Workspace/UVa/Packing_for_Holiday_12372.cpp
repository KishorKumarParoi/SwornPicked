#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        int l,w,h,a;
        scanf("%d %d %d",&l,&w,&h);
       a=l*w*h;
        if(a==(l*l*l))
        {
            printf("Case %d: good\n",c++);
        }
        else
        {
            printf("Case %d: bad\n",c++);
        }

    }
    return 0;
}
