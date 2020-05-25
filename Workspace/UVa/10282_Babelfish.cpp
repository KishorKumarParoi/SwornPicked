#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    map<string,string> Vasha;
    string temp,second;
    getline(cin,temp);
    //cout<<"1-"<<temp<<endl;
    while(temp!="")
    {
        stringstream ss(temp);
        ss>>temp>>second;
       // cout<<"2-"<<temp<<" "<<endl;
       // cout<<"second =  "<<second<<endl;
        Vasha[second]=temp;
        getline(cin,temp);
        //cout<<"3-"<<temp<<endl;
    }
    while(cin>>temp)
    {
        map<string,string>:: const_iterator it = Vasha.find(temp);
        if(it==Vasha.end())
            cout<<"eh"<<endl;
        else
            cout<<it->second<<endl;
    }
    return 0;
}
