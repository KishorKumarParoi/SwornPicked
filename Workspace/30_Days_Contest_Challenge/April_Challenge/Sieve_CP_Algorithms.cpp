#include<bits/stdc++.h>
using namespace std;

void Sieve(int n)
{
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;

    for(int i=2; i*i<= n ; i++ )
    {
        if(is_prime[i])
        {
            for(int j=i*i; j<=n; j+=i)
                is_prime[j] = false;
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(is_prime[i])
            cout<< i << " ";
    }
    cout<<endl;
}

int main()
{
    Sieve(10000000);

    //cout<<is_prime(100)<<endl;

    return 0;
}
