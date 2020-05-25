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
    int ar[5]= {1,3,2,6,4};

    list <int> mylist(ar,ar+5);
    list <int>::iterator it;
    mylist.push_front(16);
    it=find(mylist.begin(),mylist.end(),3);
    mylist.insert(it,12);
    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<< "\t";
}





