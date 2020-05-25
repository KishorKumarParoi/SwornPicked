#include<iostream>
#include<vector>
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
    vector <int> v = {1,3,5,8,9,12};
    bool ans  =  binary_search(v.begin(),v.end(),5);
    if(ans) cout<<true<<endl;
    else
    cout<<false<<endl;
}
