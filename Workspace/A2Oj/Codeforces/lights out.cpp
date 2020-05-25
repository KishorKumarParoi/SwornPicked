#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //open;
    //close;
    int s[5][5]={0};
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
         printf("%d",(s[i][j]+s[i][j-1]+s[i][j+1]+s[i-1][j]+s[i+1][j]+1)%2);
        }
        cout<<endl;
    }
    return 0;
}

