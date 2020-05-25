//13-02-19
#include<bits/stdc++.h>
using namespace std;

#define uu first
#define vv second
#define scl(n)  scanf("%d",&n)
#define pii pair<int,int>

int fx[]= {2,2,-2,-2,1,1,-1,-1};                         //Direction Array
int fy[]= {1,-1,-1,1,2,-2,2,-2};

int dis[100][100];
string s1,s2;
map<char,int>mp;

int bfs( int sx,int sy,int vx,int vy)                     //source node is in [sx][sy] cell
{
    if(sx==vx && sy==vy)
        return 0;

    dis[sx][sy]=0;

    queue<pii>q;                               //A queue containing STL pairs
    q.push(pii(sx,sy));

    while(!q.empty())
    {
        pii top = q.front();
        q.pop();

        for(int k=0; k<8; k++)
        {
            int tx = top.uu + fx[k];
            int ty = top.vv + fy[k];             //Neighbor cell [tx][ty]

            if(tx>=1 && tx<=8 && ty>=1 && ty<=8 && dis[tx][ty]==-1 )
            {
                dis[tx][ty] = dis[top.uu][top.vv]+1;

                if(tx==vx && ty == vy)
                    return dis[tx][ty];

                q.push(pii(tx,ty));
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
        cin>>s1>>s2;

        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++)
                dis[i][j]=-1;


        int sx,sy,vx,vy;
        sx = s1[0]- 'a' +1;
        sy = s1[1] - '0';

        vx = s2[0] - 'a' +1;
        vy = s2[1] - '0';

        int x = bfs(sx,sy,vx,vy);

        printf("%d\n",x);
    }

    return 0;
}






