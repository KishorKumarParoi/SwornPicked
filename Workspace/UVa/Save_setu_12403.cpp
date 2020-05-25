#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char ch[101];
    long long int k,sum=0;
    scanf("%d",&t);
    while(t--)//k
    {

        scanf("%s",ch);
        if(strcmp(ch, "donate")==0)
        {
            scanf("%lld",&k);
            sum=sum+k;
        }
        else
        {
            printf("%lld\n",sum);
        }
    }
    return 0;
}
