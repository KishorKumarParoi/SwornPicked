#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    int mat[100][100];
    cin>>node>>edge;
    for(int i=0;i<edge;i++)
    {
        int n1,n2,cost;
        cin>>n1>>n2>>cost;
        mat[n1][n2]=cost;
        mat[n2][n1]=cost;
    }
}
