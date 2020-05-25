#include <iostream>
#include <set>

using namespace std;

int main()
{
  // ==========  constructor ==============
  // ------ empty container constructors (default constructor) ----
  multiset<int> multiset1;

  // ----- range constructor ---------
  // N log(N) in general,
  // linear in N if the range is already sorted.
  int arr[] = {10, 60, 30, 40, 50};
  multiset<int> multiset2(arr, arr + 5); // multiset2: 10 30 40 50 60

  // ----- copy constructor -----------
  // linear in N
  multiset<int> multiset3(multiset2); // multiset3: 10 30 40 50 60

  // ----- list initializer -----------
  // N log(N) in general,
  // linear in N if the range is already sorted.
  multiset<int> multiset4 = {10, 60, 30, 40, 50};

  // ==========  Iterators ==============
  // begin
  // end
  // rbegin
  // rend
  auto it = ++multiset4.begin(); // *it = 30

  // ==========  Modifiers ==============
  // insert() erase()
  // If single elements are inserted, log(size)
  // If N elements are inserted, Nlog(size + N).
  // Implementations may optimize if the range is already sorted.
  multiset4.insert(23); // 10 23 30 40 50 60

  int arr2[] = {35, 45, 65};
  multiset4.insert(arr2, arr2 + 3); // 10 23 30 35 40 45 50 60 65
  multiset4.insert(arr2, arr2 + 3); // 10 23 30 35 35 40 45 45 50 60 65 65

  // position (constant)
  it = ++multiset4.begin(); // points to 23
  multiset4.erase(it);      // 10 30 35 35 40 45 45 50 60 65 65

  // value (log(container_size))
  multiset4.erase(40); // 10 30 35 35 45 45 50 60 65 65

  // range (linear distance between itr_1st and itr_2nd)
  it = multiset4.find(50);
  multiset4.erase(it, multiset4.end()); // 10 30 35 35 45 45

  // ==========  Operations ==============
  // itr find(val)
  // log(size)
  it = multiset4.find(35); // points to 1st 35 from left
  it = multiset4.find(40); // points to multiset4.end()

  // unsigned int count(val)
  unsigned int counter = multiset4.count(35); // 2
  counter = multiset4.count(40);              // 0

  // itr lower_bound(val)
  // log(size)
  it = multiset4.lower_bound(15); // *it = 30
  it = multiset4.lower_bound(30); // *it = 30
  it = multiset4.lower_bound(48); // points to multiset4.end()

  // itr upper_bound(val)
  // log(size)
  it = multiset4.upper_bound(9);  // *it = 10
  it = multiset4.upper_bound(30); // *it = 35
  it = multiset4.upper_bound(48); // points to multiset4.end()
}
