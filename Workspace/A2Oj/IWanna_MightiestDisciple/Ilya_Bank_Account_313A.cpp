//5-11-19 10.57am
#include<bits/stdc++.h>
#include<cctype>

using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0)
        cout<<n<<endl;
    else
    {
        n=abs(n);
        int x=n%10;
        int y=n/10;
        int z=y/10;
        x=z*10+x;
        //cout<<x<<" "<<y<<" "<<z<<endl;
        int Min=min(x,y);
        if(Min>0)
            cout<<"-"<<min(x,y)<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
