//26-02-20
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,i,j;
    cin>>tc;

    while(tc--)
    {
        char a[300],b[300],c[300];
        cin>>a>>b;

        int sum[300]= {};

        for(i=0; i<strlen(a); i++)
            sum[i] += a[i] - '0';
        for(i=0; i<strlen(b); i++)
            sum[i] +=b[i]-'0';

        int lenC= max(strlen(a),strlen(b));

        for(j=lenC+1; j>=0; j--)
        {
            if(sum[j])
                break;
        }

        if(j<0)
            j++;
        i=0;

        while(sum[i]==0)
            i++;

        while(i<=j)
            printf("%d",sum[i++]);

        puts("");
    }
    return 0;
}
