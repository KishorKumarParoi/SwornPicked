//10-08-19 11.30pm
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,kase=1;
    int n;
    string cmd, url;
    deque<string> b, f;

    cin>>t;

    while(t--)
    {
        b.clear();
        f.clear();
        b.push_back("http://www.lightoj.com/");

        cout<< "Case " << kase++ <<":"<<endl;
        while(cin>>cmd && cmd != "QUIT")
        {
            if(cmd =="VISIT")
            {
                cin>>url;
                f.clear();
                b.push_back(url);
                cout<< url <<endl;
            }
            else if(cmd == "BACK")
            {
                if(b.size()<2)
                {
                    cout<< "Ignored" <<endl;
                    continue;
                }
                f.push_back(b.back());
                b.pop_back();

                if(!b.empty())
                    cout<< b.back() <<endl;
                else
                    cout<< "Ignored" <<endl;
            }
            else
            {
                if(f.empty())
                {
                    cout<< "Ignored" <<endl;
                    continue;
                }
                b.push_back(f.back());
                f.pop_back();

                if(!b.empty())
                    cout<< b.back() <<endl;
                else
                    cout<< "Ignored" <<endl;
            }
        }
    }
    return 0;
}
