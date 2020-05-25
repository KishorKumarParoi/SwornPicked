#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
    // ================= constructor, initialize, declaration ==================
    // -------------- array ---------------

    array<int, 4> arr1 = {};           // arr1: 0 0 0 0
    array<int, 4> arr2 = {1, 2};       // arr2: 1 2 0 0
    array<int, 4> arr3 = {1, 2, 3, 4}; // arr3: 1 2 3 4

    // -------------- vector -----------------

    vector<int> vec1;

    // fill constructor (int, int)
    // vector_name(range, data);
    vector<int> vec2(4, 100); // vec2: 100 100 100 100

    // range constructor (data*, data*)
    // vectorname_(start_ptr, end_ptr)
    vector<int> vec3(vec2.begin(), vec2.end()); // vec3: 100 100 100 100

    int a[] = {12, 78, 45, 93};
    vector<int> vec4(a, a + 3); // vec4: 12 78 45
    vector<int> vec5(a, a + 4); // vec4: 12 78 45 93

    vector<int> vec6(arr3.begin(), arr3.end()); // vec6: 1 2 3 4

    // copy constructor
    vector<int> vec7(vec6); // vec7: 1 2 3 4

    // list initializer
    // {1, 2, 3}
    vector<int> vec8 = {12, 34, 56, 78, 90}; // ve8: 12 34 56 78 90

    // = operator
    vec8 = vector<int>(); // vec8: empty

    vector<int> vec9(vec5.rbegin(), vec5.rend());

    // -------------- deque -----------------

    deque<int> deq1;

    // fill constructor (int, int)
    // deque_name(range, data);
    deque<int> deq2(4, 100); // deq2: 100 100 100 100

    // range constructor (data*, data*)
    // dequename_(start_ptr, end_ptr)
    deque<int> deq3(deq2.begin(), deq2.end()); // deq3: 100 100 100 100

    deque<int> deq4(a, a + 3); // deq4: 12 78 45
    deque<int> deq5(a, a + 4); // deq4: 12 78 45 93

    deque<int> deq6(arr3.begin(), arr3.end()); // deq6: 1 2 3 4

    // copy constructor
    deque<int> deq7(deq6); // deq7: 1 2 3 4

    // list initializer
    // {1, 2, 3}
    deque<int> deq8 = {12, 34, 56, 78, 90}; // ve8: 12 34 56 78 90

    // = operator
    deq8 = deque<int>(); // deq8: empty

    // -------------- list -----------------

    list<int> lst1;

    // fill constructor (int, int)
    // list_name(range, data);
    list<int> lst2(4, 100); // lst2: 100 100 100 100

    // range constructor (data*, data*)
    // listname_(start_ptr, end_ptr)
    list<int> lst3(lst2.begin(), lst2.end()); // lst3: 100 100 100 100

    list<int> lst4(a, a + 3); // lst4: 12 78 45
    list<int> lst5(a, a + 4); // lst4: 12 78 45 93

    list<int> lst6(arr3.begin(), arr3.end()); // lst6: 1 2 3 4

    // copy constructor
    list<int> lst7(lst6); // lst7: 1 2 3 4

    // list initializer
    // {1, 2, 3}
    list<int> lst8 = {12, 34, 56, 78, 90}; // ve8: 12 34 56 78 90

    // = operator
    lst8 = list<int>(); // lst8: empty

    // -------------- forward_list -----------------

    forward_list<int> f_lst1;

    // fill constructor (int, int)
    // forward_list_name(range, data);
    forward_list<int> f_lst2(4, 100); // f_lst2: 100 100 100 100

    // range constructor (data*, data*)
    // forward_listname_(start_ptr, end_ptr)
    forward_list<int> f_lst3(f_lst2.begin(), f_lst2.end()); // f_lst3: 100 100 100 100

    forward_list<int> f_lst4(a, a + 3); // f_lst4: 12 78 45
    forward_list<int> f_lst5(a, a + 4); // f_lst4: 12 78 45 93

    forward_list<int> f_lst6(arr3.begin(), arr3.end()); // f_lst6: 1 2 3 4

    // copy constructor
    forward_list<int> f_lst7(f_lst6); // f_lst7: 1 2 3 4

    // forward_list initializer
    // {1, 2, 3}
    forward_list<int> f_lst8 = {12, 34, 56, 78, 90}; // ve8: 12 34 56 78 90

    // = operator
    f_lst8 = forward_list<int>(); // f_lst8: empty
    for (auto &i : f_lst6)
    {
        cout << i << " ";
    }
}
