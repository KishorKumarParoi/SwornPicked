//17-09-19 10.28pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,kase=1;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        int X,Y;
        cin>>X>>Y;
        cin>>a>>b>>c;
        int shift;
        shift=(b[0]-'A') -(a[0]-'A');
        shift%=26;
        //cout<<shift<<endl;
        printf("Case #%d: ",kase++);
        for(int i=0; i<Y; i++)
        {

            //cout<<x;
            if(isupper(c[i]))
            {
                int x=c[i]-'A';
                int y=(x-shift);
                if(y<0)
                    y=(y%26)+26;
                else
                    y%=26;
                //cout<<x<<" "<<y<<" ";
                cout<<(char)(y+65);
            }
            else
            {
                int x=c[i]-'A';
                int y=(x-shift);
                if(y<0)
                    y=(y%26)+26;
                else
                    y%=26;
                //cout<<x<<" "<<y<<" ";
                cout<<(char)((y+97)+97);
            }
            //cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
