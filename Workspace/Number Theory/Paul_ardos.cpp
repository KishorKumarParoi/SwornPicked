#include <bits/stdc++.h>
#include <vector>
#define eb emaplace_back

using namespace std;
bool isPrime(int n)
{
    if(n<2)
        return false;
    if(n==2)
        return true;
    if(n&1==0)
        return false;
    for(int i=3; i<=n/i; i+=2)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    vector<int>v;
    for(int i=1; i*i<100000000; i++)
    {
        for(int j=1; j*j*j*j<100000000; j++)
        {
            if(isPrime(i*i+j*j*j*j))
                v.emplace_back(i*i+j*j*j*j);
        }
    }
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());
    int T,n,sz=v.size();
    cin>>T;
    while(T--)
    {
        cin>>n;
        if(n==1)
            cout<<0<<endl;
        else
        {
            int low=0,high=sz-1,mid;
            while(low<high)
            {
                mid=(low+high+1)/2;
                if(v[mid]>n)
                    high=mid-1;
                else
                    low=mid;
            }
            cout<<low+1<<endl;
        }
    }
}
