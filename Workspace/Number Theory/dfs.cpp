#define pii pair<int,int>
int fx[]={1,-1,0,0}; //direction array
int fy[]={0,0,1,-1};
int cell[100][100];   //if cell[x][y]== -1 then cell is blocked
int d[100][100],vis[100][100];  //d means destination from source
int row,col;
void bfs(int sx,int sy)   //source node is in [sx][sy] cell
{
    memset(vis,0,sizeof vis);
}
