#include<bits/stdc++.h>
using namespace std;
int Totient_Phi_Masud_Vai(int n)
{
    if(n==1)
        return 1;
    int res=n; //24
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0) //24%2==0
            //cout<<"n = "<<n<<endl;
        {
            while(n%i==0)
            {
                n/=i; //12,6,3
            }
            res-=res/i;//24-12=12
            //cout<<"res = "<<res<<endl;
        }
    }
    if(n>1)
        res-=res/n;
    return res;
}

#define M 1000005
int phi[M];

void totientSieve_Masud_Vai()
{
    for(int i=1; i<M; i++)
    {
        phi[i]=i;
    }
    for(int p=2; p<M; p++)
    {
        if(phi[p]==p)
        {
            for(int k=p; k<M; k+=p)
            {
                phi[k]-=phi[k]/p;
            }
        }
    }
}

int Totient_modified_mine(int n)
{
    int ans;
    int j;
    if(n==1)
        return 1;
    ans=n;
    if(n%2==0)
    {
        ans-=ans/2;
        while(n%2==0)
        {
            n/=2;
        }
    }
    for(j=3; j*j<=n; j+=2)
    {
        if(n%j==0)
        {
            ans-=ans/j;
            while(n%j==0)
            {
                n/=j;
            }
        }
    }
    if(n>1)
        ans-=ans/n;
    return ans;
}

int Phi[1000006],mark[1000006];
void Totient_Sieve_modified_mine(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
        Phi[i]=i;
    Phi[1]=1;
    mark[1]=1;
    for(i=2; i<=n; i++)
    {
        if(!mark)
        {
            for(j=i; j<=n; j+=i)
            {
                mark[j]=1;
                Phi[j]=Phi[j]/i*(i-1);
            }
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<Totient_modified_mine(n)<<endl;
        Totient_Sieve_modified_mine(n);
        //cout<<Phi[n]<<endl;
    }
}
