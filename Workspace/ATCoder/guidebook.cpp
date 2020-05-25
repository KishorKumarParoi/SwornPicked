#include<bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define ll long long int

using namespace std;
bool comp(tuple<string,int,int> a,tuple<string,int,int>b)
{
    if(get<0>(a)!=get<0>(b))
        return get<0>(a)<get<0>(b);
    else
        return get<1>(a)>get<1>(b);
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<tuple <string,int,int> > kishor(n);
    string s;
    int p;
    for(int i=0; i<n; i++)
    {
        cin>>s>>p;
        kishor[i]=mt(s,p,i+1);
    }
    sort(kishor.begin(),kishor.end(),comp);
    for(auto a:kishor)
        cout<<get<2>(a)<<endl;
    return 0;
}
