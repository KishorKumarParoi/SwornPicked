#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map <string,int > m;
    unordered_map <string,int >::iterator it;
    m[ "dipta" ] = 43;
    m[ "arnob" ] = 42;
    m[ "nabil" ]   = 46;
    //m.insert(make_pair("nabil",41));
    //cout<<m["arnob"]<<endl;

    for(it =m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
