//19-09-19 9.52pm
#include<bits/stdc++.h>
using namespace std;

int n,r,p,q;
int divisor_two(int n)
{
    int cnt=0;
    while(n%2==0)
    {
        cnt++;
        n/=2;
    }
    return cnt;
}

int divisor_five(int n)
{
    int cnt=0;
    while(n%5==0)
    {
        cnt++;
        n/=5;
    }
    return cnt;
}

int count_two(int n)
{
    int cnt=0;
    int x=2;
    while(x<=n)
    {
        cnt+=(n/x);
        x*=2;
    }
    return cnt;
}

int count_five(int n)
{
    int cnt=0;
    int x=5;
    while(x<=n)
    {
        cnt+=(n/x);
        x*=5;
    }
    return cnt;
}

int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>r>>p>>q;

        //cout<<divisor_two(p)<<" "<<divisor_five(p)<<endl;

        int p_of_2=divisor_two(p)*q;
        int p_of_5=divisor_five(p)*q;
        //cout<<p_of_2<<" "<<p_of_5<<endl;
        // cout<<count_two(n)<< " "<<count_five(n)<<endl;

        int power_of_two=count_two(n)-count_two(n-r)-count_two(r)+p_of_2;
        int power_of_five=count_five(n)-count_five(n-r)-count_five(r)+p_of_5;

        printf("Case %d: ",kase++);
        cout<<min(power_of_two,power_of_five)<<endl;;

    }
}
