/*..............................................*\
O H M    T O T S O T  -!+
Author:Kishor Kumar Paroi
Dept:CSE-1703053
Email:kishor.josephite@gmail.com
RUET,BANGLADESH
\*---------------------------*/
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
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <cctype>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <pair<int,int> >v(n);
    int min=1e9,max=1,ans=-1;
    for (int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
        if(v[i].first<min)
            min=v[i].first;
        if(v[i].second>max)
            max=v[i].second;
    }
    for (int i=0; i<n; i++)
    {
        if (v[i].first==min && v[i].second==max)
        {
            ans=i+1;
        }
    }
    cout <<ans;

    return 0;
}
