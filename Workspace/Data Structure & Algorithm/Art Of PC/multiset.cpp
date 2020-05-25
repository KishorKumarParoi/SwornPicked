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
    multiset<int> m;
    multiset<int >::iterator it;
    m.insert(43);
    m.insert(43);
    m.insert(43);
    m.insert(1);
    m.insert(100);
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<*it <<endl;
    }
}
