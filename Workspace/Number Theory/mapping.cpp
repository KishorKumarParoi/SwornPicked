#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include<bits/stdc++.h>
#include<iostream>
#include<iterator>
using namespace std;
void compress()
{
    map<int,int> mymap;
    int input[]=
    {
        -102,
        1,
        134565589,
        134565589,
        -102,
        66666668,
        134565589,
        66666668,
        -102,
        1,
        -2
    };
    int assign = 0,compressed[100],c=0,n=sizeof(input)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        int x= input[i];
        if(mymap.find(x)==mymap.end())
        {
            mymap[x]=assign;
            printf("Mapping %d with %d\n", x, assign);
            assign++;
        }
        x=mymap[x];
        cout<<"x =  "<<x<< endl;
        compressed[c++]=x;
        cout<< "c is "<<c<<endl;
    }
    printf("Compressed array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", compressed[i]);
    puts("");
}
int main()
{
    compress();
}



