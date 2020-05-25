
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
vector<int> prime;
void shieve()
{
    for(int i=3;i*i<=1000;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=1000 ; j+=i)
                check[j]=1;
        }
    }
    prime.pb(2);
    int j=1;
    for(int i=3;i<=1000;i+=2)
    {
        if(!check[i]){
            prime.pb(i);
        }
    }
}
bool isPrime(int n){
    if(n == 1)
        return false;
    for(int i = 2 ; i*i <= n ; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
int main()
{
    shieve();
	
    int pos = 0;
    for(int i=1;i<=1000000;i++)
    {
        int temp=i;
        int total=1;
        int k=0;
        for(int j=prime[k]; k < prime.size() && j*j<=temp;j=prime[++k])
        {
            int count=1;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *=count;
        }
        if(temp!=1)
            total*=2;
			
        k = 0;
        for(int j = prime[k] ;k<prime.size() &&  j*j <= total ; j = prime[++k]){
            if(total%j == 0){
                int x = total / j;
                if(x!=j && isPrime(x)){
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