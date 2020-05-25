#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c;
    cin>>a,b,c;
    if(a>=1 && b>1 && c>=1)
    {
    if((a+b+c)%3==0)
        cout<<"YES"<<endl;
    else
        cout<< "No"<<endl;
    }
    else
        return 0;
}
