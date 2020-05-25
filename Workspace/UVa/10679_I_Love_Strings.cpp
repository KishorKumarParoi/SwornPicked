/*
2
abcdefghABCDEFGH
2
abc
abAB
xyz
1
xyz
*/

#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string sub_str_check,string str)
{
    for(int i=0; i<=str.size()-sub_str_check.size(); i++)
    {
        int j;
        for(j=0; j<sub_str_check.size(); j++)
        {
            if(str[i+j]!=sub_str_check[j])
                break;
        }
        if(j==sub_str_check.size())
            return 1;
    }
    return 0;
}
int main()
{
    int t,q,i,n;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        cin>>q;
        while(q--)
        {
            string sub_str_check;
            cin>>sub_str_check;
            int res=isSubstring(sub_str_check,str);
            if(res)
                cout<<"y"<<endl;
            else
                cout<<"n\n";
        }
    }
    return 0;
}
