#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,first,second,third,res,ans;
    scanf("%d %d %d %d",&start,&first,&second,&third);
    while(start||first||second||third)
    {
        res=((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40);
        ans=1080+(res*9);
        printf("%d\n",ans);
        scanf("%d %d %d %d",&start,&first,&second,&third);
    }
    return 0;
}
