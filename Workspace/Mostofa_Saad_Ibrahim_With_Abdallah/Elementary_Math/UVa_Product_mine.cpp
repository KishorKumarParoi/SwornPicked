#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ar[300],br[300];
    long long carry,i,j,len1,len2,len;

    while(cin>>ar>>br)
    {
        char ram[600]= {0};
        len1 = strlen(ar);
        len2 = strlen(br);

        for(i=len1-1; i>=0; i--)
        {
            carry = 0;
            for(j=len2-1; j>=0; j--)
            {
                ram[i+j] += (ar[i]-'0') * (br[j] - '0') + ram[i+j+1]-'0' + carry;
                carry = ram[i+j]/10;
                ram[i+j+1] += (ram[i+j]%10) + '0';
            }

            ram[i] = carry + '0';
        }

        for(j=0; ram[j]=='0'; j++);
        {
            if(j>=len1+len2)
                ram[1]='\0';
            else
            {
                for(i=0; ram[i]!='\0'; i++)
                    ram[i]=ram[i+j];
            }
        }

        cout<<ram<<endl;

    }
}
