//14-02-19
#include<bits/stdc++.h>
using namespace std;

#define uu first
#define vv second
#define pb push_back
#define scl(n)  scanf("%d",&n)
#define pii pair<int,int>

int fx[]= {1,1,1-1,-1,-1,0,0};
int fy[]= {1,0,-1,1,0,-1,1,-1};

map<string,int>vis;

void bfs(string start,string end,vector<string>v)
{
    queue<string>q;
    q.push(start);
    vis[start]=0;

    while(!q.empty())
    {
        string uu = q.front();
        q.pop();

        for(int i=0; i<v.size(); i++)
        {
            string now = v[i];

            if(vis[now]==0 && now.length()==uu.length())
            {
                int uncommonchar = 0;

                for(int j=0; j<uu.size(); j++)
                {
                    if(uu[j] != now[j])
                        uncommonchar++;
                }

                if(uncommonchar == 1)
                {
                    vis[now] = vis[uu] +1;
                    q.push(now);
                }
            }
        }
    }
}

int main()
{
    int tc;
    scl(tc);

    while(tc--)
    {
        string first,second,start,end;
        vector<string>v;

        while(cin>>first)
        {
            if(first== "*")
                break;
            v.pb(first);
        }


        cin.ignore();

        string fullname;
        while(getline(cin,fullname) && fullname!= "")
        {
            stringstream str(fullname);
            str>>start>>end;

            vis.clear();
            bfs(start,end,v);
            cout<<start<<" "<<end<< " " <<vis[end]<<endl;

        }
        if(tc)
            cout<<endl;
    }
}
