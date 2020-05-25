#include<bits/stdc++.h>
using namespace std;
int a[10005], b[10005];
vector<int>v;
void calcu()
{
    int i, j;
    for(i=1; i<=10000; i++)
    {
        a[i]=0;
        if(i%2==0)
            a[i]=1;
    }
    a[2]=0;
    for(i=3; i*i<=10000; i++)
    {
        if(a[i]==0)
        {
            for(j=i+i; j<=10000; j=j+i)
            {
                a[j]=1;
            }
        }
    }
    for(i=2; i<=10000; i++)
    {
        if(a[i]==0)
        {
            v.push_back(i);
            //cout<<i<<endl;
        }
    }
}

void fine()
{
    int i, j, k, l, m, h, c;
    b[1]=0;
    b[0]=0;
    b[2]=1;
    b[3]=1;
    vector<int>v1[10005];
    v1[2].push_back(2);
    v1[3].push_back(3);


    for(i=4; i<=10000; i++)
    {
        c=0;
        for(j=0; j<v.size(); j++)
        {
            k=i-v[j];
            //cout<<k<<endl;
            if(k<0)
                break;
            if(v1[k].size()>0)
            {
                if(binary_search(v1[k].begin(), v1[k].end(), v[j]))
                {
                    continue;
                }
                else
                {

                    v1[i].push_back(v[j]);
                    for(h=0; h<v1[k].size(); h++)
                    {
                        v1[i].push_back(v1[k][h]);
                    }
                    b[i]=v1[i].size();
                    c=1;
                    sort(v1[i].begin(), v1[i].end());
                    break;
                }
            }
        }
        if(c==0)
            b[i]=0;
        /* int hh=0;
        cout<<i<<" "<<b[i]<<endl;
        for(int t=0; t<v1[i].size(); t++){
            cout<<v1[i][t]<<" ";
            hh=hh+v1[i][t];
        }
        cout<<endl;
        cout<<hh<<endl; */
    }

}


int main()
{

    int t;
    cin>>t;
    calcu();
    fine();
    while(t--)
    {
        int n, i, j, k, m, p;
        cin>>n;
        cout<<b[n]<<endl;
    }

    return 0;
}
