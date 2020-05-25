#include<bits/stdc++.h>
using namespace std;
void fuckingSet(char *s, int s_size)
{

    unsigned int pow_s_size = pow(2, s_size);
    int cnt, j;

    for(cnt = 0; cnt < pow_s_size; cnt++)
    {
        for(j = 0; j < s_size; j++)
        {
            if(cnt & (1 << j))
                cout << s[j] <<" ";
        }
        cout << endl;
    }
}
int main()
{
    char s[] = {'1','2','3'};
    fuckingSet(s, 3);
    return 0;
}
