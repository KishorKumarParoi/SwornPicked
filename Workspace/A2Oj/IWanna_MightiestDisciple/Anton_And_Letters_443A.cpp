//5-11-19 7.04am
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    set<char>st;
    getline(cin,s);
    //cout<<s<<endl;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            st.insert((char)s[i]);
    }
    cout<<st.size()<<endl;
    return 0;
}
