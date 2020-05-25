#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int > mymap;
    map<char,int> :: key_compare mycomp=mymap.key_comp();

    mymap['a']=100;
    mymap['b']=200;
    mymap['c']=300;

    char highest = mymap.rbegin()->first;

    auto it = mymap.rbegin();
    do
    {
        cout<<it->first<< " "<<it->second<<endl;
    }
    while(mycomp((*it++).first, highest) );
    cout<<endl;

    return 0;
}
