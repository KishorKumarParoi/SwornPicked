#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,num,milecost,juicecost,k=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
       milecost=0;
       juicecost=0;
        while(n--)
        {
            scanf("%d",&num);
            milecost+=(num/30)*10+10;
            juicecost+=(num/60)*15+15;
        }
      printf("Case %d: ",k++);
      if(milecost<juicecost)
        printf("Mile %d\n",milecost);
      else if(milecost==juicecost)
        printf("Mile ");
      if(juicecost<=milecost)
        printf("Juice %d\n",juicecost);

    }
    return 0;
}
