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
using namespace std;
int main()
{
    vector <int> v = {1,3,5,7,9,12};
    auto it = lower_bound(v.begin(),v.end(),5);
    cout<<distance(v.begin(),it) <<endl;
    cout<<(it-v.begin)<<endl;

    //upper bound
        auto it = lower_bound(v.begin(),v.end(),5);
        cout<< ((it ==v.end()) ? "Not Found" : to_string(*it)<<endl;
        return 0;
}
