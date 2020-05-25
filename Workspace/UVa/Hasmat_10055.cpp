#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("hin.txt", "r" ,stdin);
    //freopen("hout.txt" , "w" ,stdout);
    long long int a,b,r;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        r=abs(b-a);
        printf("%lld\n",r);
    }
}
