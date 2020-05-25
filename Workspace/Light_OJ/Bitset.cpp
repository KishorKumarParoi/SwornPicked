#include<bits/stdc++.h>
#include<bitset>
#define sz 8
using namespace std;
int main()
{
    bitset<sz>b(string("1111"));
    b=b<<2;
    cout<<b<<endl;
    return 0;
}
