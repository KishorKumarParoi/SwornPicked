#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    double sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=1/(double)v[i];
    }
    printf("%.10lf\n",1/sum);
}
