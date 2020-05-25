//25-09-19 6.45pm
#include<bits/stdc++.h>
using namespace std;

#define sc(n) scanf("%d",&n)

int main()
{
    int t,kase=1;
    sc(t);
    while(t--)
    {
        int n,k;
        string S;
        sc(n);
        sc(k);
        for(int i=0; i<n; i++)
            S+=(char)(65+i);

        //cout<<S<<endl;
        sort(S.begin(),S.end());
        int sz=S.size();

        printf("Case %d:\n",kase++);
        do
        {
            if(k<=0)
                break;
            for(int i=0; i<sz; i++)
                printf("%c",S[i]);
            printf("\n");
            k--;
        }
        while(next_permutation(S.begin(),S.end()));
    }
    return 0;
}
