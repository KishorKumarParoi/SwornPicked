#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int cs = 1; cs <= t; cs++)
    {
        string x;
        cin >> x;
        int idx = -1;
        for(int i = 0; i < x.length(); i++)
        {
            if(x[i] == 'A')
            {
                idx = i;
                break;
            }
        }
        int cnt = 0;
        int tot = 0;
        printf("Case #%d: ", cs);
        for(int i = idx + 1; i < x.length(); i++)
        {
            if(x[i] == 'B')
                cnt++;
            tot++;
        }
        //cout<< "idx = "<<idx<<endl;
        int need = (tot + 1) / 2;
        if(idx == x.length() - 1)
        {
            puts("Y");
        }
        else if(cnt == 0)
        {
            puts("N");
        }
        else if(cnt >= need && cnt <tot)
        {
            puts("Y");
        }
        else
            puts("N");
    }
}
