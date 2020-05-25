//2-11-19 9.39pm
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(int j=n+1; ; j++)
    {
        int a=j;
        set<int>st;
        st.clear();
        for(i=1; i<=4; i++)
        {
            st.insert(a%10);
            a/=10;
        }
        if(st.size()==4)
        {
            cout<<j<<endl;
            return 0;
        }
    }
}
