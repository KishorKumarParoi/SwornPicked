#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[2001];
    int c=1;
    while(scanf("%s",&ch))
    {
        if(strcmp(ch, "#")==0)
            break;
        if(strcmp(ch, "HELLO")==0)
            printf("Case %d: ENGLISH\n",c++);
        else if(strcmp(ch, "HOLA")==0)
            printf("Case %d: SPANISH\n",c++);
        else    if(strcmp(ch, "HALLO")==0)
            printf("Case %d: GERMAN\n",c++);
        else  if(strcmp(ch, "BONJOUR")==0)
            printf("Case %d: FRENCH\n",c++);
        else  if(strcmp(ch, "CIAO")==0)
            printf("Case %d: ITALIAN\n",c++);
        else if(strcmp(ch, "ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",c++);
        else
            printf("Case %d: UNKNOWN\n",c++);
    }
    return 0;
}
