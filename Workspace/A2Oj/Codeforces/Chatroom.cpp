#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt_o,cnt_e,cnt_h,cnt_l;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h')
            cnt_h++;
        if(s[i]=='e')
            cnt_e++;
        if(s[i]=='l')
            cnt_l++;
        if(s[i]=='o')
            cnt_o++;
    }
    if(cnt_h>=1 && cnt_e>=1 && cnt_l>=2 && cnt_o>=1)
        cout<< "YES\n";
    else
        cout<< "NO\n";
}
