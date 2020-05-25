#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

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

void vectorDemo()
{
    //vi(20);

    /*
     vector< vector<int> > CorrectDefinition;
    vector<int>v(10);

    //  bool is_nonempty_notgood=(v.size()>=0); //avoid this
    //bool is_nonempty_ok=!v.empty();
    //for(int i=1; i<100000000; i*=2)
    //v.push_back(i);

    for(int i=0; i<20; i++)
        v[i]=i+1;

    v.resize(25);
    for(int i=20; i<25; i++)
        v[i]=i*2;

    v.resize(30);
    for(int i=25; i<30; i++)
        v.push_back(i*2);

    for(auto x : v)
        cout<<x<<" ";
    cout<<endl;

    v.clear();

    int elements_size=v.size();
    cout<<elements_size<<endl;

    vector<int>v1;
    vector<int>v2 = v1;
    vector<int>v3(v1);

    vector<int>Data (1000);
    vector<string> names(20, "unknown");

    vector< vector<int> > Matrix;
    int N,M;
    vector< vector <int> > Matrix(N,vector<int> (M,-1));

    //void some_function(vector<int> v)   never do these unless you are sure !!!

    //void some_function(const vector<int> &v)

    //void modify_vector(vector<int> &v) { v[0]++;} //correct

    template <typename T1, typename T2> struct pair
    {
        T1 first;
        T1 second;
    }
    pair<string, pair<int,int> > P;
    string s = P.first;
    int x = P.second.first;
    int y= P.second.second;

    vector< pair<double, pair <int,int> > > vppi;

        void reverse_array_simple(int *A,int N)
        {
            int first=0,last=N-1;
            while(first<last)
            {
                swap(A[first],A[last]);
                first++;
                last--;
            }
        }


        void reverse_array (int *A,int N)
        {
            int *first=A, *last=A+N-1;
            while(first<last)
            {
                swap(*first,*last);
                first++;
                last--;
            }
        }

        template < typename T > void reverse_array_template( T *first, T *last)
        {
            if(first!=last)
            {
                while(true)
                {
                    swap(*first, *last);
                    first++;
                    if(first==last)
                        break;
                    last--;
                    if(first==last)
                        break;
                }
            }
        }

    */

    //int data[]= {2,3,5,7,11,13,17,19,23,29,31};
    //vector<int>primes(data,data+sizeof(data)/sizeof(data[0]));   //few drawbacks

    //vector<int>v2(v.begin(),v.begin()+(v.size()/2));
    int data[10]= {1,3,5,7,9,11,13,15,17,19};
    reverse(data+2,data+6);                   // 5 7 9 11 to 11 9 7 5

    //vector<int>v3(v.rbegin()+(v.size()/2), v.rend());

    /*
    vi;
    for(int i=1; i<100; i++)
        v.push_back(i*i);

    if(find(v.begin(),v.end(),49)!=v.end())
        cout<<"present"<<endl;
    else
        cout<< "not present"<<endl;


    int  kishor=(find(v.begin(),v.end(),49)  -  v.begin());
    if(kishor<v.size())
        cout<<kishor<<endl;

    vector<int>X(all(v));
    //index
    int x1=max_element(X.begin(),X.end()) - X.begin();
    int x2=min_element(X.begin(),X.end()) - X.begin();

    //value
    int val1=*max_element(X.begin(),X.end());
    int val2=*min_element(X.begin(),X.end());

    sort(all(X));
    //X.insert(16,5);
    // X.insert(2,all(v));
    for(auto x: X)
        cout<<x<<" ";
    cout<<endl;

    sort(X.rbegin(),X.rend());
    */


    vector<int>v;

    for(int i=1; i<100; i++)
        v.push_back(i);

    vector<int>v2= {5,3,4,8};
    v.insert(v.begin()+5,42);
    v.insert(v.begin()+2,all(v2));

    v.erase(v.begin()+5);
    v.erase(v.begin()+8,v.begin()+15);

    for(auto x: v)
        cout<<x<<" ";
    cout<<endl;

    cout<<v.size()<<endl;
}

void stringDemo()
{
    string s="hello";
    string s1,s2,s3,s4;
    s1=s.substr(0,3); //hel
    cout<<s1<<endl;
    s2=s.substr(1,3) ;  //ell
    cout<<s2<<endl;
    s3=s.substr(0,s.length()-1) ;//hell
    cout<<s3<<endl;
    s4=s.substr(1,s.length()-1) ;  //ello
    cout<<s4<<endl;

}

void setDemo()
{
    set<int>s;
    for(int i=1; i<=100; i++)
        s.insert(i);
    s.insert(42);

    for(int i=2; i<=100; i+=2)
        s.erase(i);

    int n=int(s.size());

    set< pair<string,pair<int,vector<int> > > > SS;
    int total=0;
    tr(SS,it)
    {
        total+=it->second.first;
    }

    //s.find() works in o(logN)
    s.erase(69);
    for(auto x: s)
        cout<<x<<" ";
    cout<<endl;

    set<int> ::iterator it1,it2;
    it1=s.find(10);
    it2=s.find(20);
    cout<<*it2<<endl;
    s.erase(it1,it2);

    for(auto x: s)
        cout<<x<<" ";
    cout<<endl;

    vector<int>v;
    set<int>s2(all(v));
    vector<int>v2(all(s2));

}

void mapDemo()
{
    map<string,int> M;
    M["Top"]=1;
    M["Coder"]=2;
    M["SRM"]=10;
    int x=M["Top"] +M["Coder"];
    if(M.find("SRM")!=M.end())
    {
        M.erase(M.find("SRM"));
    }

    int r=0;
    tr(M,it)
    {
        r+=it->second;
    }
    cout<<r<<endl;

    /*
    Wrong procedure
    void f(const map<string,int> &M)
    {
    if(M["the meaning"]==42)   //error
    }

    void f(const map<string,int> &M)
    {
        if(M.find("the meaning")!=M.end() && M.find("the meaning")->second==42)
            cout<< "Don't Panic"<<endl;
    }
    */
}


int main()
{
    mapDemo();
    return 0;
}
