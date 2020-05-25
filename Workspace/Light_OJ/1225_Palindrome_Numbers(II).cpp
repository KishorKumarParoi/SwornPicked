//10-08-19 8.52pm
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int x)
{
    int ans,temp;
    temp=x;
    ans=0;
    while(x)
    {
        ans=ans*10+x%10;
        x/=10;
    }
    return ans==temp;
}

int main()
{
    int x,kase=1,t;
    cin>>t;
    while(t--)
    {
        cin>>x;
        palindrome(x)? printf("Case %d: Yes\n", kase++) : printf("Case %d: No\n", kase++);
    }
    return 0;
}

