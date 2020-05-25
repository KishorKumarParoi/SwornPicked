#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    while(cin >> A >> B >>C)
    {
        if(A==B && B==C)
            printf("*\n");
        else if(A==B)
            printf("C\n");
        else if(A==C)
            printf("B\n");
        else if(B==C)
            printf("A\n");
        else
            printf("*\n");
    }

    return 0;
}
