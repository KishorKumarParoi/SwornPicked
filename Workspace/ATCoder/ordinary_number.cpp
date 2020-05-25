#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[25];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int cnt=0;
    for(int i=1; i<n-1; i++)
    {
        //cout<<a[i]<<endl;
        if((a[i-1]<a[i] && a[i]<a[i+1]) || (a[i+1]<a[i]&& a[i]<a[i-1]))
            cnt++;
        //cout<<cnt <<" ";
    }
    cout<<cnt<<endl;
}
