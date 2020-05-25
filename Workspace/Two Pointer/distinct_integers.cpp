#include<bits/stdc++.h>
#include<cctype>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    int f=0;
    for(int i=b; i>=a; i--)
    {
        set<int>s;
        int x=i;
        int temp=i;
        string S=to_string(x);
        while(x>0)
        {
            s.insert(x%10);
            x/=10;
        }
        if(S.size()==s.size())
        {
            f=1;
            cout<<temp<<endl;
            break;
        }
    }
    if(f==0)
        cout<<-1<<endl;
    return 0;
}
