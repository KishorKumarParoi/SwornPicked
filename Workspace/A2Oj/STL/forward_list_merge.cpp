#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;

int main()
{
    forward_list<double>first = {4.2,2.9,3.1};
    forward_list<double>second = {1.4,7.7,3.1};
    forward_list<double> third = {6.2,3.7,7.1};

    first.sort();
    second.sort();

    first.merge(second);

    for(auto x : first)
        cout<<x<<" ";
    cout<<endl;

    first.reverse();
    for(auto x : first)
        cout<<x<<" ";
    cout<<endl;

    first.sort(greater<double> ());
    third.sort(greater<double> ());

    first.merge(third,greater<double>());

    for(auto x: first)
        cout<<x<<" ";
    cout<<endl;


    return 0;
}
