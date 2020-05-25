//25-2-20
#include<bits/stdc++.h>

#define Pi acos(-1.0)
#define U unsigned
#define ll long long
#define uu first
#define vv second
#define endl "\n"
#define scu(n) scanf("%u",&n)
#define scl(n) scanf("%d",&n)
#define scll(n) scanf("%lld",&n)

//Vector Macros
#define pb push_back
#define eb emplace_back
#define ALL(v) v.begin(),v.end()
#define UNIQUE(v) v.erase(unique(ALL(v)),v.end())
#define MIN(c) *min_element(ALL(c))
#define MAX(c) *max_element(ALL(c))
#define SUM(c) accumulate(ALL(c),0)

//Loop Macros
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define For(i,n) for(int i=0;i<n;i++)

//Debug Macros
#define deb(a) cout << #a << " : " << a << " ";
#define debln(a) cout<< #a <<" : " << a << endl;
#define open  freopen("input.txt","r",stdin);
#define close freopen ("output.txt","w",stdout);

//Print Macros
#define print(v)  for(auto x : v) {  cout<<x<<" ";   }  cout<<endl;
#define PRINT(v)  for(auto x : v) { cout<<x.uu<<" "<<x.vv<<endl; }
#define _fastio  ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

void multiply(char str1[],char str2[],char result[])
{
    int len1,len2,i,j,temp,carry;

    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i=0; i<len1+len2; i++)
    {
        result[i]='0';
    }

    result[i] = '\0';

    for(i=len1-1 ; i>=0; i--)
    {
        carry = 0;
        for(j=len2-1; j>=0; j--)
        {
            temp = (str1[i]-'0') * (str2[j]-'0') + result[i+j+1]-'0' + carry;
            carry = temp/10;
            result[i+j+1] = (temp%10) + '0' ;
        }

        result[i] = carry + '0';
    }

    for(j=0; result[j]=='0'; j++);
    {
        if(j>=len1+len2)
            result[1]='\0';
        else
        {
            for(i=0; result[i]!='\0'; i++)
                result[i]=result[i+j];
        }
    }

}

int main()
{
    // _fastio
    //open
    //close
    //printf("I Will Be a RED Coder By this year\n");
    // My Dream Is to Become LGM oneday . I will never go back on my words. That's my ninja Way.

    char str1[100000];
    char str2[100000];
    char result[100000];

    while(gets(str1))
    {
        gets(str2);
        multiply(str1,str2,result);
        printf("%s\n",result);
    }

    return 0;
}

