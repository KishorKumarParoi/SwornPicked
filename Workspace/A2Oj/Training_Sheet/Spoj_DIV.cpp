
// Problem : Divisors
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/DIV/
// Memory Limit : 1536.000000MB
// Time Limit : 705.000000milisec
// Powered by CP Editor (https://github.com/coder3101/cp-editor2)

//23-12-19
#include<bits/stdc++.h>
#define U unsigned
#define pb push_back

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;


using namespace std;

bool check[1009];
vector<U> prime;
void shieve()
{
    for(U i=3; i*i<=1000; i+=2)
    {
        if(!check[i])
        {
            for(U j=i*i; j<=1000 ; j+=i)
                check[j]=1;
        }
    }
    prime.pb(2);
    U j=1;
    for(U i=3; i<=1000; i+=2)
    {
        if(!check[i])
        {
            prime.pb(i);
        }
    }
}
bool isPrime(U n)
{
    if(n == 1)
        return false;
    for(U i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

main()
{
    shieve();

    U pos = 0;
    for(U i=1; i<=1000000; i++)
    {
        U temp=i;
        U total=1;
        U k=0;
        for(U j=prime[k]; k < prime.size() && j*j<=temp; j=prime[++k])
        {
            U count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *=count+1;
        }
        if(temp!=1)
            total*=2;
        k = 0;
        for(U j = prime[k] ; k<prime.size() &&  j*j <= total ; j = prime[++k])
        {
            if(total%j == 0)
            {
                U x = total / j;
                if(x!= j && isPrime(x))
                {
                    pos++;
                    if(pos%9 == 0)
                        printf("%d\n", i);
                    break;
                }
            }
        }
    }
    return 0;
}
