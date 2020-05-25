//6-11-19 5.48am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,a,cnt=0,ans,res;
    cin>>x1>>y1>>x2>>y2;
    if(y1==y2)
    {
        a=x2-x1;
        x3=x1;
        y3=y1+a;
        x4=x1+a;
        y4=y1+a;
    }
    else if(x1==x2)
    {
        a=y2-y1;
        x3=x1+a;
        y3=y1;
        x4=x1+a;
        y4=y1+a;
    }
    else if(abs(y2-y1)==abs(x2-x1))
    {
        x3=x2;
        y3=y1;
        x4=x1;
        y4=y2;
    }
    else
    {
        cout<< -1<<endl;
        return 0;
    }
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}
