#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a[100],i,j,k,n,m,t,even,odd,o;

    cin>>t;

    for(i=0; i<t; i++)
    {
        even=0;
        odd=0;
        cin>>n;
        if(n==0)
        {
            even++;
        }
        if(n==1)
        {
            odd++;
            even++;
        }
        if(n!=0&&n!=1)
        {
            o=0;
            a[o]=0;
            o++;
            even++;
            a[o]=1;
            odd++;
            for(o=2; o<=(90-7); o++)
            {
                a[o]=a[o-1]+a[o-2];
                if((a[o]%2)!=0)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
                if(a[o]==n)
                {
                    break;
                }
            }
        }
        cout<<even<<" "<<odd<<endl;


    }





}
