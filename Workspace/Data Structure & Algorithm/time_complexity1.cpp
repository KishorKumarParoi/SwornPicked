#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt,n;
    cin>>n;
    cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cnt++;
        }
    }
    cout<< "n = "<< n << " count = "<<cnt<<endl;

}

