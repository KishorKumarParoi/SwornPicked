#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
    bool arr[10];
    for(int i=0; i<10; i++)
        arr[i]=false;
    while(n>0)
    {
        int digit = n%10;
        if(arr[digit])
            return false;
        arr[digit]=true;
        n=n/10;
    }
    return true;
}
int main()
{
    int arr[] = {1291, 897, 4566, 1232, 80, 700};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<n; i++)
        isLucky(arr[i])? cout << arr[i] << " is Lucky \n":
                              cout << arr[i] << " is not Lucky \n";
    return 0;
}
