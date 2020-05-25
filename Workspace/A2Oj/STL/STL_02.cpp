#include<bits/stdc++.h>
#include<algorithm>


#define vi vector<int>v
#define vvi vector< vi > vvi
#define pi pair<int,int> p
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

using namespace std;

void createVectorfromMap()
{
    map<string,int>M;
    vector<pair<string,int> > V(all(M));
}

void copyingDatabetweenContainers()
{
    //copy(from_begin,from_end,to begin)
    vector<int>v1,v2;

    for(int i=1; i<20; i++)
        v1.push_back(i);

    for(int i=30; i<50; i++)
        v2.push_back(i);

    cout<<v1.size()<<endl;

    v1.resize(v1.size()+v2.size());
    cout<<v1.size()<<endl;

    copy(all(v2), v1.end()-v2.size());
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;

    set<int>s;

    for(int i=1; i<20; i++)
        s.insert(i);

    ///s.insert(19,all(v1));
    //copy(all(v1),inserter(s));    bujhinai

    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;
}

void mergingLists()
{
    /*
    union , R =  A + B
    intersect, R = A * B
    Set Difference , R = A * (~B)
    Set Symmetric Difference , R = A XOR B
    */

    // end_result = set_intersection (begin1,end1,begin2,end2,begin_result)

    int data1[]= {5,10,15,20,25};
    int data2[]= {50,40,30,20,10};

    sort(data1,data1+5);
    sort(data2,data2+5);
    vector<int>v(10);

    vector<int>:: iterator it  = set_symmetric_difference(data1,data1+5,data2,data2+5,v.begin());
    v.resize(it-v.begin());

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;


}


void mergingListfromVectorAndSet()
{
    int data1[]= {5,10,15,20,25};
    int data2[]= {50,40,30,20,10};
    vector<int>v1(data1, data1+ sizeof(data1)/sizeof(data1[0]));
    vector<int>v2(data2, data2+ sizeof(data2)/sizeof(data2[0]));
    vector<int>tmp(max(v1.size(),v2.size() ));
    vector<int>res = vector <int> (tmp.begin(),set_intersection(all(v1), all(v2), tmp.begin()));
    int cnt=set_intersection(all(v1),all(v2),tmp.begin()) - tmp.begin();


    for(auto x: res)
        cout<<x<<" ";
    cout<<endl<<endl;

    for(auto x: tmp)
        cout<<x<<" ";
    cout<<endl<<endl;

    set<int>s1,s2;
    for(int i=0; i<500; i++)
    {
        s1.insert(i*(i+1)%1000);
        s2.insert(i%1000);
    }
    static int temp[5000];
    vector<int>res2=vector<int> (temp,set_symmetric_difference(all(s1),all(s2),temp));
    int kishor = set_symmetric_difference(all(s1), all(s2), temp) -temp;

    cout<<kishor<<endl;
}

void calculatingAlgorithms()
{
    vector<int>v;
    for(int i=0; i<10; i++)
        v.push_back(i);
    cout<<v.size()<<endl;

    long long sum=accumulate(all(v), (long long)0);
    cout<<sum<<endl;


    //double product
    //inner product
    //nontrivial sorting
    //using own objects in maps and sorts
    //memory management

    //vector<int>(all(v).swap(v)) for reserving
}
int main()
{
    calculatingAlgorithms();
    return 0;
}
