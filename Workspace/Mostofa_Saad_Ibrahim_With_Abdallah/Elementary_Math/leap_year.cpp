#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        int leap=0,huku=0,bulu=0;

        if(x%4==0 && (x%400==0 && x%100==0) )
            leap =1;
        if(x%15==0)
            huku=1;
        if(x%55==0)
            bulu=1;


        if(leap==0 && huku==0 && bulu==0)
            cout<< "This is an ordinary year.\n";
        if(leap==1)
            cout<< "This is leap year.\n";
        if(huku==1)
            cout<< "This is huluculu festival year.\n";
        if(bulu==1)
            cout<< "This is bulukulu festival year.\n";

        cout<<endl;
    }
}
