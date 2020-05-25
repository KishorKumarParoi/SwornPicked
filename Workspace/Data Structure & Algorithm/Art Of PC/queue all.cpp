#include <iostream>
#include <queue>
#include <deque>
#include <list>

using namespace std;

int main()
{
  // ================= constructor, initialize, declaration ==================
  // empty/default constructor
  queue<int> queue1; // queue1: empty queue

  // copy a queue from a deq
  // complexity linear N
  deque<int> deq1 = {1, 4, 7, 2};      // deq1: 1 4 7 2
  queue<int, deque<int>> queue2(deq1); // queue2: 1 4 7 2

  // copy from a vector
  // compexity N
  list<int> lst1 = {2, 4, 8, 6};      // vec1: 2 4 8 6
  queue<int, list<int>> queue3(lst1); // queue3: 2 4 8 6

  // ================= modifier ==================
  // push() pop()
  // coplexity, push_back() and pop_front() of container respectively
  queue2.push(29); // queue2: 1 4 7 2 29
  queue2.push(31); // queue2: 1 4 7 2 29 31
  queue2.pop();    // queue2: 4 7 2 29 31
  queue2.pop();    // queue2: 7 2 29 31

  // ============= access ===============
  // constant complexity
  cout << queue2.front() << endl; // 7
  cout << queue2.back() << endl;  // 31

  queue2.front() = 111;
  queue2.back() = 222;

  // ============== traversing =============
  while (!queue2.empty())
  {
    cout << queue2.front() << " ";
    queue2.pop();
  }
  // 111 2 29 222
}
