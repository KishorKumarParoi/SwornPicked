#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("jumping_mario.txt", "r" ,stdin);
    //freopen("jumping mari_out.txt", "w",stdout );
    int t,c,cnt_l,cnt_h,cnt_eq;
    scanf("%d",&t);
     c=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[10000];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }

        cnt_h=0;
        cnt_l=0;
        cnt_eq=0;
        for(i=0; i<n; i++)
        {
            if(s[i+1]>s[i])
                cnt_h++;
            else if((s[i]>s[i+1])&& s[i]!=s[i+1])
                cnt_l++;
               else if(s[i]=s[i+1])
                cnt_eq++;
        }
        printf("Case %d: %d %d\n",c++,cnt_h,cnt_l-1);
    }
    return 0;
}
