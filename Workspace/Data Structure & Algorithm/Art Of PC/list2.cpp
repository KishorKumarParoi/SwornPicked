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
    list <int> mylist(4,2);
    list <int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }

}


