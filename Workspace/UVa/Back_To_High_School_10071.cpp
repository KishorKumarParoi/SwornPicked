#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream a;
    ofstream b;
    a.open("high_school_in.txt");
    //freopen("high_school_in.txt", "r", stdin);
    //freopen("high_school_out.txt", "w",stdout);
    b.open("high_school_out.txt");
    int x;
    while(!a.eof())
    {
        a>>x;
        cout<<x<<endl;
        b<<x<<endl;

    }

    return 0;

}
