#include <iostream>
#include <set>

using namespace std;

int main()
{
  // ==========  constructor ==============
  // ------ empty container constructors (default constructor) ----
  set<int> set1;

  // ----- range constructor ---------
  // N log(N) in general,
  // linear in N if the range is already sorted.
  int arr[] = {10, 60, 30, 40, 50};
  set<int> set2(arr, arr + 5); // set2: 10 30 40 50 60

  // ----- copy constructor -----------
  // linear in N
  set<int> set3(set2); // set3: 10 30 40 50 60

  // ----- list initializer -----------
  // N log(N) in general,
  // linear in N if the range is already sorted.
  set<int> set4 = {10, 60, 30, 40, 50};

  // ==========  Iterators ==============
  // begin
  // end
  // rbegin
  // rend
  auto it = ++set4.begin(); // *it = 60
  it = set4.begin()++;      // *it = 10

  // ==========  Modifiers ==============
  // insert() erase()
  // If single elements are inserted, log(size)
  // If N elements are inserted, Nlog(size + N).
  // Implementations may optimize if the range is already sorted.
  set4.insert(23); // 10 23 30 40 50 60

  int arr2[] = {35, 45, 65};
  set4.insert(arr2, arr2 + 3); // 10 23 30 35 40 45 50 60 65
  set4.insert(arr2, arr2 + 3); // 10 23 30 35 40 45 50 60 65

  // erase
  // position (constant)
  it = ++set4.begin(); // points to 23
  set4.erase(it);      // 10 30 35 40 45 50 60 65

  // value (log(container_size))
  set4.erase(40); // 10 30 35 45 50 60 65

  // range (linear distance between itr_1st and itr_2nd)
  it = set4.find(50);
  set4.erase(it, set4.end()); // 10 30 35 45

  // ==========  Operations ==============
  // itr find(val)
  // log(size)
  it = set4.find(30); // points to 30
  it = set4.find(40); // points to set4.end()

  // unsigned int count(val)
  unsigned int counter = set4.count(30); // 1
  counter = set4.count(40);              // 0

  // itr lower_bound(val)
  // log(size)
  it = set4.lower_bound(15); // *it = 30
  it = set4.lower_bound(30); // *it = 30
  it = set4.lower_bound(48); // points to set4.end()

  // itr upper_bound(val)
  // log(size)
  it = set4.upper_bound(9);  // *it = 10
  it = set4.upper_bound(30); // *it = 35
  it = set4.upper_bound(48); // points to set4.end()

  cout << *it;

  // for (auto &&i : set4)
  // {
  //   cout << i << " ";
  // }
}
