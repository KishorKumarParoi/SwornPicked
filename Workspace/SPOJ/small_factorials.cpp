#include<bits/stdc++.h>
using namespace std;

#define max 500
int result[max];

int result_size;

void multiply(int x)
{
    //In multiply method multiply this "x" number to result[] and update the result in reverse order
    int carry=0;
    for(int i=0; i<result_size; i++)
    {
        int prod=result[i]*x+carry;
        result[i]=prod%10;            //TO store reverse order
        carry=prod/10;
        cout<<"prod,result[i],carry = "<<prod<<" "<<result[i]<< " "<<carry<<endl;
    }
    while(carry)
    {
        result[result_size]=carry%10;
        carry=carry/10;
        result_size++;
        cout<<"result[result_size],carry,result_size = "<<result[result_size-1]<< " "<<carry<< " "<<result_size<<endl;
    }
}
void factorial(int n)
{
    //initialize result[0]=1 and number of digit = 1

    result[0]=1;
    result_size=1;

    //now multiply digits one by one like baccakaler method

    for(int x=2; x<=n; x++)
    {
        multiply(x);
    }
    //print the result
    for(int i=result_size-1; i>=0; i--)
    {
        cout<<result[i];
    }
    cout<<endl;
}

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        factorial(n);
    }
    return 0;
}
