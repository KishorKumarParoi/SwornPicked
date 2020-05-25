#include<bits/stdc++.h>
using namespace std;

bool balanced_bracket(string S)
{
    stack<char>s;
    char x;
    for(int i=0; i<S.size(); i++)
    {
        if(S[i]=='(')
        {
            s.push(S[i]);
            continue;
        }
        if(s.empty())
            return false;
        if(S[i]==')')
        {
            x=s.top();
            s.pop();
            break;
        }
    }
    return 0;
}
int main()
{
    int n;
    string s;
    cin>>n>>s;
    if(n%2==1)
        cout<< "No\n";
    else
    {
        if(balanced_bracket(s))
            cout<< "No\n";
        else
            cout<< "Yes\n";
    }
}
