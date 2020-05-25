#include<bits/stdc++.h>
using namespace std;
/*#define SIZE 100
int adj[SIZE][SIZE];


int main()
{
    freopen("kruskal.txt","r",stdin);
    int vertex;
    int edge;
    cin>>vertex>>edge;
    int node1,node2;
    for(int i=0;i<edge;i++)
    {
        int cost;
        cin>>node1>>node2>>cost;
        adj[node1][node2]=cost;
        adj[node2][node1]=cost;
    }
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adj[i][j]<< " ";
        }
        cout<<endl;
    }
}
*/

typedef pair<int,int>PII;
//vector<PII>v[100];

int main()
{
    freopen("kruskal.txt","r",stdin);
    int vertex;
    int edge;
    cin>>vertex>>edge;
    vector<PII>v[vertex];

    for(int i=0; i<edge; i++)
    {
        int source;
        PII p;
        cin>>source>>p.first>>p.second;
        v[source].push_back(p);
        int s2=p.first;
        p.first=source;
        v[s2].push_back(p);
    }
    for(int i=0; i<vertex; i++)
    {
        cout<<i<< " - - ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j].first << "-"<<v[i][j].second<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}
