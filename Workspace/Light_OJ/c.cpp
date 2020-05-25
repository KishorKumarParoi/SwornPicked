#include<iostream>
using namespace std;

int main()
{
    int t,m;
    string s1,s2;
    int flag=0;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        cin>>m;

        for(int j=0; j<m; j++)
        {
            cin>>s1>>s2;
            if(s2=="wine" && s1!="wine")
            {
                if(s1=="water" || s1=="soda")
                {
                  flag=1;
                }
                else
                {
                   flag=0;
                }
            }
            else
            {
             flag=0;
            }

        }
          printf("Case %d: ",cs);
        (flag==1)?cout<<"Yes"<<"\n":cout<<"No"<<"\n";

    }
    return 0;
}
