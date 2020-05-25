#include<bits/stdc++.h>

#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
using namespace std;


void member_functions()
{
    cout<< "begin\n"<<endl;
    array<int,5>myarray = {2,16,77,34,50};
    cout<< "myarray contains : ";
    for(auto x : myarray)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\nat\n"<<endl;
    cout<< "using at : ";

    for(int i=0; i<5; i++)
        cout<<myarray.at(i)<<" ";
    cout<<endl;

    cout<<"\nfront and back\n"<<endl;
    cout<< "back & front : ";
    cout<<myarray.back()<<" "<<myarray.front()<<endl;

    cout<< "\nconst/const_reverse/reverse\n"<<endl;
    cout<< "Ektai Solution : ";

    for(auto it=myarray.crbegin(); it!=myarray.crend(); it++)
        cout<< *it<<" ";
    cout<<endl;

    cout<<"\ndata\n"<<endl;
    const char *cstr = "Test String";
    array<char,15>charray;
    memcpy(charray.data(), cstr, 12);
    cout<<charray.data()<<endl;

    cout<<"\nFill\n"<<endl;
    array<int,6>arr;
    arr.fill(5);
    for(auto x: arr)
        cout<<x<<" ";
    cout<<endl;

    cout<<"\noperator\n"<<endl;

    unsigned int i;
    array<int,10>myarray1;

    for(int i=0; i<10; i++)
        myarray1[i]=i;

    cout<<"myarray contains : ";
    for(int i=0; i<10; i++)
        cout<<myarray1[i]<<" ";
    cout<<endl;

    cout<<"myarray size : "<<myarray.size()<<endl;

    cout<<"\n Swapping \n"<<endl;

    array<int,5> first = {10,20,30,40,50};
    array<int,5> second = {11,22,33,44,55};

    first.swap(second);

    cout<< "first : ";
    for(auto x: first)
        cout<<x<<" ";
    cout<<endl;

    cout<< "second : ";
    for(auto x : second)
        cout<<x<<" ";
    cout<<endl;
}
int main()
{
    member_functions();
    return 0;
}


