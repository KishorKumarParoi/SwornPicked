//29-08-19 11.51am
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define max 500
int result[max];
int result_size;

void multiply(int x)
{
    int carry=0;
    for(int i=0; i<result_size; i++)
    {
        int prod=result[i]*x+carry;
        result[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        result[result_size]=carry%10;
        carry/=10;
        result_size++;
    }
}
void factorial(int n)
{
    result[0]=1;
    result_size=1;

    for(int x=2; x<=n; x++)
    {
        multiply(x);
    }

    for(int i=result_size-1; i>=0; i--)
        cout<<result[i];
    cout<<endl;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        factorial(n);
    }
}
