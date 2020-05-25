//17-09-19 1.03pm
//Place : Lab Final Numerical Methods

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define si set<int>
#define open                                  freopen("input_curvefitting.txt","r",stdin)         //opening input file
#define close                                  freopen ("output_curvefitting.txt","w",stdout)     //opening output file



int main()
{

    //equation : y= c*e*b^x
    //Taking Input from File
    open;
    close;
    int n,i,x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
    double a,b;

    cin>>n;

    //getting the value of x

    for(i=0; i<=n-1; i++)
    {
        scanf("%d ",&x[i]);
    }

    //getting the value of y

    for(i=0; i<=n-1; i++)
    {
        scanf("%d ",&y[i]);
    }


    for(i=0; i<=n-1; i++)
    {
        sumx=sumx +x[i];
        sumx2=sumx2 +x[i]*x[i];
        sumy=sumy +y[i];
        sumxy=sumxy +x[i]*y[i];

    }
    a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    b=((n*sumxy-sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0);

    //printf("The general equation for y=c*e*b^x\n");
    cout<<a+b<<endl;

    return 0;
}

