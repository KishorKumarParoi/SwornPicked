#include <bits/stdc++.h>
using namespace std;

// A utility function that returns true if there is
// a subset of arr[] with sun equal to given sum
bool isSubsetSum (vector<int>v, int n, int sum)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;

    // If last element is greater than sum, then
    // ignore it
    if (v[n-1] > sum)
        return isSubsetSum (v, n-1, sum);

    /* else, check if sum can be obtained by any of
        the following
        (a) including the last element
        (b) excluding the last element
    */
    return isSubsetSum (v, n-1, sum) ||
           isSubsetSum (v, n-1, sum-v[n-1]);
}

// Returns true if arr[] can be partitioned in two
// subsets of equal sum, otherwise false
bool findPartiion (vector<int>v, int n)
{
    // Calculate sum of the elements in array
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    // If sum is odd, there cannot be two subsets
    // with equal sum
    if (sum%2 != 0)
        return false;

    // Find if there is subset with sum equal to
    // half of total sum
    return isSubsetSum (v, n, sum/2);
}

// Driver program to test above function
int main()
{
    int t,a,b,c;
    int n;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        cin>>a>>b>>c;
        v.clear();
        for(int i=0; i<a; i++)
            v.push_back(1);
        for(int i=0; i<b; i++)
            v.push_back(2);
        for(int i=0; i<c; i++)
            v.push_back(3);

        n=v.size();
        //cout<<n<<endl;
        if (findPartiion(v, n) == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

