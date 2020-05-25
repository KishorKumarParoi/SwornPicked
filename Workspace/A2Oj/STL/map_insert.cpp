#include<bits/stdc++.h>
using namespace std;

#define pci pair<char ,int >

int main()
{
    map<char,int> mymap;

    //first insert function reversion

    mymap.insert(pci('a',100));
    mymap.insert(pci('z',200));

    pair<map <char,int > :: iterator, bool > ret ;
    ret=mymap.insert(pci('z',500));

    if(ret.second==false)
    {
        cout<< "element 'z' already existed\n";
        cout<< "with a value of "<<ret.first->second<<endl;
    }

    //second insert function version with hint version

    auto it = mymap.begin();
    mymap.insert(it,pci('b',300));                   //max efficiency inserting
    mymap.insert(it,pci('c',400));                    // no max efficiency inserting


    //third insert function version (range insertion)

    map<char,int>kishor;
    kishor.insert(mymap.begin(), mymap.find('c'));

    //showing contents

    cout<< "mymap contains\n";
    for(auto & x : mymap)
        cout<<x.first<< " "<<x.second<<endl;

    cout<< "kishor contains\n";
    for(auto &x : kishor)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}
