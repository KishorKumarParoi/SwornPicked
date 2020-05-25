#include<cstdio>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define MAX 100000 //maximum node
vector<int> edges[MAX];
vector<int> cost[MAX];  //parallel vector to store costs;

int main()
{
    int numNodes,numEdges;
    scanf("%d%d",&numNodes,&numEdges);
    for(int i=1; i<=numEdges; i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(1);
        cost[y].push_back(1);
    }
    for(int i=1; i<=numNodes; i++)
    {
        cout<< "edges["<<i<< "] : ";
        for(int j=0; j<edges[i].size(); j++)
        {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }
}
