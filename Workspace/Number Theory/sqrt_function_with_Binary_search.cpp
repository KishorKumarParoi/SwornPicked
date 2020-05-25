#include<bits/stdc++.h>
using namespace std;

double sqrtnum(double num)
{
    double lower_bound=0;
    double upper_bound=num;
    double temp=0;
    int nCount=1000;
    while(nCount!=0)
    {
        temp=(lower_bound+upper_bound)/2;
        cout<<temp<<endl;
        if(temp*temp==num)
        {
            return temp;
        }
        if(temp*temp>num)
        {
            upper_bound=temp;
        }
        else
        {
            lower_bound=temp;
        }
        nCount--;
    }
    return temp;
}
int main()
{
    double num;
    cin>>num;
    if(num<0)
        return 0;
    else
        cout<<sqrtnum(num)<<endl;
}
