#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;

void member_functions()
{
    //at
    map<string,int> mymap =
    {
        {"alpha",0},{"beta",0},{"gamma",0}
    };

    mymap.at("alpha") = 10;
    mymap.at("beta") = 20;
    mymap["gamma"] = 30;

    for(auto &x : mymap)
        cout<<x.first<< " "<<x.second<<endl;
    cout<<endl;

    //clear
    mymap.clear();
    mymap["a"]=100;
    mymap["b"]=200;
    for(auto &x : mymap)
        cout<<x.first<< " "<<x.second<<endl;
    cout<<endl;

    //count
    map< char,int>mymap1;

    mymap1['a']=101;
    mymap1['c']=202;
    mymap1['f']=303;

    for(char c='a' ; c< 'h'; c++)
    {
        cout<<c<<"->";
        if(mymap1.count(c)>0)
            cout<<"element"<<endl;
        else
            cout<< "Not element"<<endl;
    }

    //emplace hint
    auto it=mymap1.end();
    it=mymap1.emplace_hint(it,'b',10);
    mymap1.emplace_hint(it,'a',12);
    mymap1.emplace_hint(mymap1.end(), 'c',14 );

    for(auto &x : mymap1)
        cout<<x.first<< " "<<x.second<<endl;
    cout<<endl;

    //empty

    while(!mymap1.empty())
    {
        cout<<mymap1.begin()->first << "=>"<<mymap1.begin()->second<<endl;
        mymap1.erase(mymap1.begin());
    }

    //erase


    mymap1['a']=10;
    mymap1['b']=20;
    mymap1['c']=30;
    mymap1['d']=40;
    mymap1['e']=50;
    mymap1['f']=60;

    auto it1=mymap1.find('b');
    mymap1.erase(it1);

    mymap1.erase('c');

    it1=mymap1.find('e');

    mymap1.erase(it1, mymap1.end());
    for(auto &x : mymap1)
        cout<<x.first<< " "<<x.second<<endl;
    cout<<endl;

    // lower bound/upper bound

    map<string,int> ::iterator itlow,itup;

    itlow=mymap.lower_bound("b");
    itup=mymap.upper_bound("c");

    cout<<itlow->second<< " "<< itup->second<<endl;
    mymap.erase(itlow,itup);

    for(auto &x : mymap)
        cout<<x.first<< " "<<x.second<<endl;
    cout<<endl;
}

int main()
{
    member_functions();
    return 0;
}
