#include<bits/stdc++.h>
#define mp make_pair
using namespace std;

int main()
{
    pair<int,char> p;
    p.first=10;
    p.second='a';
    cout<<p.first<<" "<<p.second<<endl;
    p=mp(23,'A');
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p2(p);
    cout<<p2.first<<" "<<p2.second<<endl;
    pair<string,pair <int,char>  > student;
    student=mp("Kishor",mp(53,'F'));
    cout<<student.first<< " "<<student.second.first<<" "<<student.second.second<<endl;
    return 0;
}
