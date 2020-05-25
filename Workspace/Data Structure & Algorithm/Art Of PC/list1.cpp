#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    list <float> mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }

}

