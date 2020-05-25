//19-09-19
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int diffx=0;
    int diffy=0;
    int leader;
    int X=0,Y=0;
    int maxx=0,maxy=0;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        X+=x;
        Y+=y;
        if(X>Y)
        {
            diffx=X-Y;
            if(maxx<diffx)
                maxx=diffx;
        }

        else
        {
            diffy=Y-X;
            if(maxy<diffy)
                maxy=diffy;
        }

    }
    if(maxx>maxy)
        cout<<1<<" "<<maxx<<endl;
    else
        cout<<2<<" "<<maxy<<endl;
}
