#include<cstdio>
#include<bits/stdc++.h>
#include<list>
using namespace std;
list<int> l;
list<int> ::iterator i;
void print()
{
    for(i=l.begin(); i!=l.end(); i++)
    {
        printf("%d  ",*i);
    }
    printf("\n");
}
int main()
{
    l.push_back(3);
    l.push_back(6);
    l.push_back(5);
    l.push_back(8);
    l.push_back(2);
    l.push_back(3);
    l.push_back(1);
    l.push_back(0);
    print();
    l.sort();
    print();
    l.remove(5);
    print();
    l.unique();
    print();
    //l.erase();
    //print();
    l.begin();
    i++;
    l.insert(i,4,10);
    print();


}
