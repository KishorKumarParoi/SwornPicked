//21-11-19
#include<bits/stdc++.h>

#define scl(n)   scanf("%d",&n)
#define pb    push_back
#define For(i,n)     for(int i=0;i<n;i++)
using namespace std;

int n,q;
vector<int>v;
int main()
{
    scl(n);
    scl(q);
    For(i,n)
    {
        int a;
        scl(a);
        v.pb(a);
    }
    For(i,q)
    {
        int typ;
        scl(typ);
        if(typ==1)
        {
            int k,x;
            scl(k);
            scl(x);
            v.insert(v.begin()+k-1, x);
        }
        if(typ==2)
        {
            int k;
            scl(k);
            v.erase(v.begin()+k-1);
        }
        if(typ==3)
        {
            int k;
            scl(k);
            printf("%d\n",v[k-1]);
        }
    }
    return 0;
}

