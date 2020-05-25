//2-11-19 8.06am
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n%4== 0 || n%7==0 || n%47==0 || n%74==0|| n%474==0|| n%477==0 || n%447==0 || n%744==0 || n%774==0 || n%747==0)
        cout<< "YES\n";
    else
        cout<<"NO"<<endl;
    return 0;
}
