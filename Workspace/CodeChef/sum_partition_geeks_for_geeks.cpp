//22-09-19 10.55pm
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;

bool findPartiion (vector<ll>v, int n)
{
    int sum = 0;
    int i, j;

    for (i = 0; i < n; i++)
        sum += v[i];

    if (sum%2 != 0)
        return false;

    bool part[sum/2+1][n+1];


    for (i = 0; i <= n; i++)
        part[0][i] = true;


    for (i = 1; i <= sum/2; i++)
        part[i][0] = false;

    for (i = 1; i <= sum/2; i++)
    {
        for (j = 1; j <= n; j++)
        {
            part[i][j] = part[i][j-1];
            if (i >= v[j-1])
                part[i][j] = part[i][j] || part[i - v[j-1]][j-1];
        }
    }

    return part[sum/2][n];
}

// Driver program to test above funtion
int main()
{
    ll t,a,b,c;
    ll n;
    cin>>t;
    //vector<int>v;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            cout<<"NO\n";
            continue;
        }
        v.clear();
        for(int i=0; i<a; i++)
            v.push_back(1);
        for(int i=0; i<b; i++)
            v.push_back(2);
        for(int i=0; i<c; i++)
            v.push_back(3);

        n=v.size();
        if (findPartiion(v, n) == true)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}


