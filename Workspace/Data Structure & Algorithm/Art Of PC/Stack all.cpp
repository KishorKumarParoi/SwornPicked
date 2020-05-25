#include <iostream>
#include <stack>
#include <deque>
#include <vector>

using namespace std;

int main()
{
  // ================= constructor, initialize, declaration ==================
  // empty/default constructor
  stack<int> stack1; // stack1: empty stack

  // copy a stack from a deq
  // complexity linear N
  deque<int> deq1 = {1, 4, 7, 2};      // deq1: 1 4 7 2
  stack<int, deque<int>> stack2(deq1); // stack2: 1 4 7 2

  // copy from a vector
  // compexity N
  vector<int> vec1 = {2, 4, 8, 6};      // vec1: 2 4 8 6
  stack<int, vector<int>> stack3(vec1); // stack3: 2 4 8 6

  // ================= modifier ==================
  // push() pop()
  // coplexity, push_back() and pop_front() of container respectively
  stack3.push(29); // stack3: 2 4 8 6 29s
  stack3.push(31); // stack3: 2 4 8 6 29 31
  stack3.pop();    // stack3: 2 4 8 6 29
  stack3.pop();    // stack3: 2 4 8 6

  // ============= access ===============
  cout << stack3.top() << endl; // 6
  stack3.top() = 9;
  cout << stack3.top() << endl; // 9
                                // stack3: 2 4 8 9

  // ============== traversing =============
  while (!stack3.empty())
  {
    cout << stack3.top() << " ";
    stack3.pop();
  }
  // 9 8 4 2
}
