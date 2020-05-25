// Requires C++17 or 17+
// C++ program to demonstrate the use for_each_n
// using function pointers as lambda expressions.
#include <bits/stdc++.h>
using namespace std;

/* Helper function to modify each element */
int add1(int x)
{
    return (x + 2);
}

int main()
{
    vector<int> arr({ 1, 2, 3, 4, 5, 6 });

    // The initial vector
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    // Using function pointer as third parameter
    for_each_n(arr.begin(), 2, add1);

    // Print the modified vector
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    // Using lambda expression as third parameter
    for_each_n(arr.begin() + 2, 2, [](auto& x)
    {
        x += 2;
    });

    // Print the modified vector
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}

