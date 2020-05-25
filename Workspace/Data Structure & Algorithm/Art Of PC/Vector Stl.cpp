#include<stdio.h>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(4);
    v.push_back(0);

    vector<int>::iterator i;
    printf("Unsorted Version : ");

    for(i=v.begin(); i!=v.end(); i++)
        printf("%d   ",*i);
    printf("\n");
    sort(v.begin(),v.end());

    printf("Sorted Version   : ");

    for(i=v.begin(); i!=v.end(); i++)
        printf("%d   ",*i);
    printf("\n");

}
