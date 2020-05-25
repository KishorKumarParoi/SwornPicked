#include<bits/stdc++.h>
using namespace std;
int prime_factorization(int n)
{
    int cnt=1;
    int sq=sqrt(n);
    for(int i=2; i<=sq; i++)
    {
        if(n%i==0)
            cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=prime_factorization(i);
    }
    cout<<sum<<endl;;
    return 0;
}
