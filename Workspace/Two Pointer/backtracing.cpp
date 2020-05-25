//30-09-19 4.33am
#include<bits/stdc++.h>
using namespace std;


int n;
int used[20],number[20];

bool isPrime(int p)
{
    for(int i=2; i<=sqrt(p); i++)
    {
        if(p%i==0)
            return false;
    }
    return true;
}


void backtracking(int at)
{
    if(at==(n+1) )
    {
        for(int i=1 ; i<=n; i++)
        {
            // if(isPrime(number[i]+number[i+1]))
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int i=2; i<=n; i++)
    {
        if(!used[i] && isPrime(number[at-1] +number[at-2]) )
        {
            used[i]=1;
            number[at]=i;
            cout<< "1- "<<i<<" "<<used[i]<<" "<<at<<" "<<number[at]<<endl;
            backtracking(at+1);
            used[i]=0;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int kase=1;

    while(cin>>n)
    {
        memset(used,0,sizeof(used));
        memset(number,0,sizeof(number));
        number[0]=number[n+1]=0;
        if(kase>1)
            putchar('\n');
        printf("Case %d:\n",kase++);
        backtracking(1);
    }
}

