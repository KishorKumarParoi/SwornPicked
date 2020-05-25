#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,num,cnt,pow_5;
    cin>>t;
    while(t--)
    {
        cnt=0;
        pow_5=5;
        cin>>num;
        while(pow_5<=num)
        {
            cnt+=num/pow_5;
            pow_5*=5;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
