#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
            cout<< "n is zero\n";
        if(n>0)
            cout<<n<< " is positive number\n";
        if(n<0)
            cout<<n<< " is negative number\n";
    }
}
