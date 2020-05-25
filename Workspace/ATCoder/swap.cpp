#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[55];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]!=i)
            cnt++;
    }
    if(cnt<=2)
        cout<< "YES\n";
    else
        cout<< "NO\n";
}
