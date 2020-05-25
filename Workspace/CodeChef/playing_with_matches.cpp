#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    int t,x,y,n;
    int a[10];
    cin>>n;
    a[0]=6,a[1]=2,a[2]=5,a[3]=5,a[4]=4,a[5]=5;
    a[6]=6,a[7]=3,a[8]=7,a[9]=6;
    while(n--)
    {
        cin>>x>>y;
        t=x+y;
        string s = to_string(t);
        int sum=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                sum+=a[0];
            if(s[i]=='1')
                sum+=a[1];
            if(s[i]=='2')
                sum+=a[2];
            if(s[i]=='3')
                sum+=a[3];
            if(s[i]=='4')
                sum+=a[4];
            if(s[i]=='5')
                sum+=a[5];
            if(s[i]=='6')
                sum+=a[6];
            if(s[i]=='7')
                sum+=a[7];
            if(s[i]=='8')
                sum+=a[8];
            if(s[i]=='9')
                sum+=a[9];
        }
        cout<<sum<<endl;
    }
}
