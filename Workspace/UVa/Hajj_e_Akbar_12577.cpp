#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10];
    int k=1;
    while(scanf("%s",ch))
    {
        if(!strcmp(ch,"*"))
            break;
        else if(!strcmp(ch, "Hajj" ))
            printf("Case %d: Hajj-e-Akbar\n",k++);
        else
            printf("Case %d: Hajj-e-Asghar\n",k++);
    }
    return 0;
}
