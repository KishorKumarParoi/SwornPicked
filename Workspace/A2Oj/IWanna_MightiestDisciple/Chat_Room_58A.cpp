//2-11-19 7.37am
#include <bits/stdc++.h>
using namespace std;

string s="hello";
char a;
int main()
{
    int i=0;
    while(cin>>a && a!='\n')
    {
        if(s[i]==a)
            i++;
    }
    cout<< (i==5 ? "YES\n" : "NO\n" );
    return 0;
}
