#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;

int main()
{
    vector <pair<int,string> >v;
    vector <pair<int,string> >::iterator it;
    v.push_back(make_pair(21,"dipta" ));
    v.push_back(make_pair(22,"nabil" ));
    v.push_back(make_pair(23,"arnob" ));
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<it->second<<" "<<it->first<<endl;
    }
}
