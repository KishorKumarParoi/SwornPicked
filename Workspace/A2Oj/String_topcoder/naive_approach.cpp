#include<bits/stdc++.h>
using namespace std;

string text, pattern;

void function_bruteforce()
{
    int i,j;
    int n=(int)text.size();
    int m=(int)pattern.size();

    for(i=0; i<n; i++)
    {
        for(j=0; j<m && (i+j)<n ; j++)
        {
            if(text[i+j]!=pattern[j])
                break;
            if(j==(m-1))
            {
                cout<<"match found at " <<i<< " no. index\n";
                break;
            }
            //cout<<text[i+j] <<" "<<pattern[j]<<endl;
            //  cout<<j<< " "<<m<<endl;
        }
    }
}

int main()
{

    while( cin>>text>>pattern)
    {
        function_bruteforce();
    }
    return 0;
}
