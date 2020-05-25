#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int s[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(s[j]>=s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}
int main()
{
    int t,i,temp=0,k,n,c=1;
    int s[101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        bubble_sort(s,n);
        printf("Case %d: %d\n",c++,s[n-1]);

    }
    return 0;
}
