#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

bool f(int x,int y)
{
    return x>y;
}

void VectorDemo()
{
    vector<int>A= {11,2,3,14};
    cout<<A[1]<<endl;
    sort(A.begin(),A.end());    //O(NlogN)

    //2 3 11 14
    //O(logN)

    bool present = binary_search(A.begin(),A.end(),3);
    present = binary_search(A.begin(),A.end(),4);

    A.push_back(100);
    present = binary_search(A.begin(),A.end(),100);
    //2 3 11 14 100
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    //2 3 11 14 100 100 100 100 100 123
    A.push_back(123);

    auto it = lower_bound(A.begin(),A.end(),100);
    auto it2 = upper_bound(A.begin(),A.end(),100);
    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl;

    sort(A.begin(),A.end(),f);
    for(auto x:A)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}


void SetDemo()
{
    set<int>S;    //sorting in logN
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for(auto x:S)
        cout<<x<<" ";
    cout<<endl;

    //-10 -1 1 2
    auto it=S.find(-1);
    if(it==S.end())
        cout<<"Not Present"<<endl;
    else
        cout<< "Present\n";

    auto it2=S.lower_bound(-1);
    auto it3=S.upper_bound(0);
    cout<<*it2<<" "<<*it3<<endl;
    auto it4=S.upper_bound(2);
    if(it4==S.end())
        cout<< "OOPS!!"<<endl;
    else
        cout<< "YAY!\n";

    S.erase(1);
    for(auto x:S)
        cout<<x<<" ";
    cout<<endl;

}

void MapDemo()
{
    map<int,int>A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    A[1000001]=1;
    map<char,int> cnt;
    string x= "kishor kumar";
    for(char c:x)
    {
        cnt[c]++;
    }
    for(auto x:A)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    cout<<cnt['k'] <<" "<<cnt['i']<<endl;
}

void PowerOfSTL()
{
    // [2,3]

    /*add[2,3]
    add[10,20]
    add[30,400]
    add[399,450]
    give me the interval 401
    */
    set< pair<int,int> >S;
    S.insert({2,450});
    S.insert({10,20});
    S.insert({30,400});
    S.insert({1,1});
    for(auto x:S)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;

    int point=401;
    auto it=S.upper_bound({point,INT_MAX});

    if(it==S.begin())
    {
        cout<< "Not Lying in Interval\n";
        return ;
    }

    it--;
    pair<int,int> current =*it;

    if(current.first<=point && point <=current.second)
    {
        cout<< "Present\n";
    }
    else
        cout<< "OOPS!!\n";
}

void VS()
{
    map<char,int>M;
    unordered_map<char,int>U;
    string s = "Kishor Kumar Paroi";

    for(char : s)
        M[c]++;     //O(NlogN) N=|s|
    for(char c: s)
        U[c]++;        //O(N)

    //unordered map is faster than map
    //unordered use hashing
    //map use BST

}
int main()
{
    PowerOfSTL();
    return 0;
}
