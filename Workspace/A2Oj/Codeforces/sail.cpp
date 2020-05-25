#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define xll __int128
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define vi vector<int>
#define MATRIX vector<vector<int>>
#define MATRIXB vector<vector<bool>>
#define MATRIXC vector<vector<char>>
#define MATRIXLL vector<vector<ll>>
#define MATRIX3D vector<vector<vector<int>>>
#define MAX(A,B,C) max(A,max(B,C))
#define MIN(A,B,C) min(A,min(B,C))
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int dist(int x1,int y1,int x2,int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}
int main()
{
    FASTIO;
    int t;
    ll sx,sy;
    ll dx,dy;
    cin >> t >> sx >> sy >> dx >> dy;
    string str;
    cin >> str;
    ll currX = sx;
    ll currY = sy;
    unordered_map<char,ll> DIR = {{'S',-1},{'N',1},{'E',1},{'W',-1}};
    ll i;
    for(i=0; i<t && (currX != dx || currY != dy); ++i)
    {
        ll moveX = currX;
        ll moveY = currY;
        if(str[i] == 'S' || str[i] == 'N')
            moveY += DIR[str[i]];
        else
            moveX += DIR[str[i]];

        if(dist(currX,currY,dx,dy) > dist(moveX,moveY,dx,dy))
        {
            currX = moveX;
            currY = moveY;
        }

    }
    if(currX == dx && currY == dy)
        cout<<i;
    else
        cout<<-1;
    cout<<'\n';
}
