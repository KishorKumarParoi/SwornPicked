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
    multimap<string, int >m;
    multimap<string, int >::iterator it;
    m.insert(make_pair("dipta",43));
    m.insert(make_pair("dipta",42));
    m.insert(make_pair("dipta",47));
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first << " " <<it->second <<endl;
    }
}

