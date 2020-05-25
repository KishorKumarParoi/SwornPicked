#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll x=0,cnt=0;
    string s;
    while(n>0)
    {
        s+=(n%2==0) ? "0" : "1" ;
        n/=2;
        cnt++;
    }
    reverse(s.begin(),s.end());
    cout<<cnt<<" "<<s<<endl;
    cout<<(1<<(cnt-1))<<endl;
}
