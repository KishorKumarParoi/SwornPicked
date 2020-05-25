//2-11-19 10.51pm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,n;
    cin>>n;
    cin>>s;
    int cnt=0;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            n--;
        }
    }
    cout<<s.size()-n<<endl;
    return 0;
}
