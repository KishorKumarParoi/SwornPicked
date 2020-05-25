//17-09-19 12.42pm
//Place : Lab Final Numerical Methods

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define si set<int>
#define open                                  freopen("input.txt","r",stdin)         //opening input file
#define close                                  freopen ("output.txt","w",stdout)     //opening output file

int main()
{
    //Taking Input from file

    open;
    close;

    int n;
    int i,j;
    double ax[10];
    double ay[10];
    double x;
    double nr,dr;
    double y=0;
    double h;
    double p;
    double diff[20][20];
    double y1,y2,y3,y4;

    cin>>n;

    //getting the value of x

    for(i=0; i<n; i++)
    {
        cin>>ax[i];
    }

    //getting the value of y


    for(i=0; i<n; i++)
    {
        cin>>ay[i];
    }


    //finding value for defined x = 25

    cin>>x;


    h=ax[1]-ax[0];
    for(i=0; i<n-1; i++)
        diff[i][1]=ay[i+1]-ay[i];

    for(j=2; j<=4; j++)
        for(i=0; i<n-j; i++)
            diff[i][j]=diff[i+1][j-1]-diff[i][j-1];

    i=0;

    do
    {
        i++;
    }
    while(ax[i]<x);

    i--;
    p=(x-ax[i])/h;
    y1=p*diff[i][1];
    y2=p*(p-1)*diff[i-1][2]/2;
    y3=(p+1)*p*(p-1)*diff[i-2][3]/6;
    y4=(p+1)*p*(p-1)*(p-2)*diff[i-3][4]/24;


    y=ay[i]+y1+y2+y3+y4;

    cout<<endl;
    cout<<x<<"  "<<y;

    return 0;
}
