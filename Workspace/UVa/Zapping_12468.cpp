#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c1,c2,c3,c4;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
        if(b>a)
        {
            c1=a-b+100;
            c2=b-a;
            int min=c1<c2?c1:c2;
            printf("%d\n",min);
        }
        if(b<a)
        {
             c1=b-a+100;
            c2=a-b;
            c3=abs(c1);
            //printf("c3=%d\n",c3);
            c4=abs(c2);
            //printf("c4=%d\n",c4);
            int min=c3<c4?c3:c4;
            printf("%d\n",min);
        }
    }
    return 0;
}
