#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int N,X,Y;
        cin>>N>>X>>Y;
        for(int i=0; i<N; i++)
        {
            int m;
            cin>>m;
            v.push_back(m);
        }
        if(v[0]==X && v[v.size()-1]==Y)
            cout<< "BOTH\n";
        else if(v[0]==X )
            cout<< "EASY\n";
        else if(v[v.size()-1]==Y)
            cout<< "HARD\n";
        else
            cout<< "OKAY\n";
    }
    return 0;
}
