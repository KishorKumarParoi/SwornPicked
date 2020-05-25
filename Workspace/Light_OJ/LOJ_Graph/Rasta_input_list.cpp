#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

typedef pair<int, int > PII;
vector<string> vertexNames;
map <string, int > vertexNumbers;

int main()
{
    freopen("kruskal_char.txt", "r", stdin);
    int vertex,edge;
    cin>>vertex>>edge;
    vector<PII>v[vertex];
    for(int i=0; i<vertex; i++)
    {
        string str;
        cin>>str;
        vertexNames.eb(str);
        vertexNumbers[str]=i;
    }
    for(int i=0; i<edge; i++)
    {
        string str1,str2;
        cin>>str1>>str2;
        int source;
        PII p;
        source=vertexNumbers[str1];
        p.first=vertexNumbers[str2];
        cin>>p.second;
        v[source].eb(p);
        int source2=p.first;
        p.first=source;
        v[source2].eb(p);
    }

    for(int i=0; i<vertex; i++)
    {
        cout<<vertexNames[i]<< "--";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<vertexNames[v[i][j].first]<<  "-"<<v[i][j].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}
