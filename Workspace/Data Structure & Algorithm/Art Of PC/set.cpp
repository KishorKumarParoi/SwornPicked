#include<bits/stdc++.h>
#include<iostream>
#include<utility>
#include<set>
#include<iterator>
using namespace std;

int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("r");
    s.insert("a");
    s.insert("b");
    vector<string>v;
    pair<set<string>::iterator,bool> p;
    p=s.insert("h");
    for(set<string>::iterator it=s.begin();
            it!=s.end();
            it++)
    {
        v.push_back(it);
    }
    for(auto i :v)
        cout<<i<<" ";
    cout<<endl;

}

