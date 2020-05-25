//13-02-19
#include<bits/stdc++.h>
using namespace std;

#define uu first
#define vv second
#define scl(n)  scanf("%d",&n)
#define pii pair<int,int>

int fx[]= {1,1,1-1,-1,-1,0,0};
int fy[]= {1,0,-1,1,0,-1,1,-1};

map<char,int>mp;
char cell[110][110];                         //cell[x][y]=1 hole cell Ta Block
int vis[110][110];
int row,col;

void ALLIZZNOTWELL(int tx,int ty)
{
    if(cell[tx][ty] == 'A')
        mp['A']++;
    if(cell[tx][ty] == 'L')
        mp['L']++;
    if(cell[tx][ty] == 'I')
        mp['I']++;
    if(cell[tx][ty] == 'Z')
        mp['Z']++;
    if(cell[tx][ty] == 'W')
        mp['W']++;
    if(cell[tx][ty] == 'E')
        mp['E']++;
}

void initialize()
{
    mp['A']=mp['L']=mp['I']=mp['Z']=mp['W']=mp['E'] = 0;
}

bool valid()
{
    if(mp['A']>=1 && mp['L']>=4 && mp['I']>=1 && mp['Z']>=2 && mp['W']>=1 && mp['E']>=1)
        return true;
    else
        return false;
}

void bfs( int sx,int sy)                     //source node is in [sx][sy] cell
{
    vis[sx][sy]=1;
    mp[cell[sx][sy]]++;

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

            if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!='a' && vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                ALLIZZNOTWELL(tx,ty);

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
        scl(row);
        scl(col);

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                vis[i][j]=0;
            }
        }
        mp.clear();

        for(int i=0; i<row; i++)
        {
            cin>>cell[i];
        }

        initialize();
        bfs(0,0);

        if(valid())
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}
