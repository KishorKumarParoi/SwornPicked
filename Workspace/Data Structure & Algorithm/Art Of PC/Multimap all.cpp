#include <iostream>
#include <map>
#include <utility>
#include <functional>

using namespace std;

int main()
{
  // =============== Constructor =======================
  // empty/default constructor
  map<char, int> mp1;

  // list initializer
  // for sorted linear
  // for unsorted nlog(n)
  map<char, int> mp2 = {{'z', 100}, {'k', 200}, {'g', 150}}; // mp2: a 100 e 200 g 150
  mp2['b'] = 120;                                            // mp2: a 100 b 120 e 200 g 150

  // copy constructor
  // linear
  map<char, int> mp3(mp2); // mp3: a 100 b 120 e 200 g 150

  // range constructor
  // linear for sorted elements
  // nlog(n) for unsorted elements
  map<char, int> mp4(mp2.begin(), mp2.end()); // mp4: a 100 b 120 e 200 g 150

  pair<char, int> pair_arr_1[4] = {
      make_pair('b', 100),
      make_pair('x', 200),
      make_pair('a', 10),
      make_pair('z', 111)};

  map<char, int> mp5(pair_arr_1, pair_arr_1 + 4); // mp5: a 10  b 100 x 200 z 111

  pair<char, int> pair_arr_2[4] = {{'s', 200}, {'a', 100}, {'z', 230}, {'b', 261}};

  map<char, int> mp6(pair_arr_2, pair_arr_2 + 4); // mp6: a 100 b 261 s 200 z 230

  // =============== Access =======================
  // [] operator
  // can create an element
  // return the value if key is at present
  // return 0, if not present
  // constant coplexity
  mp6['c'] = 112; // mp6: a 100 b 261 c 112 s 200 z 230
  cout << mp6['a'] << " " << mp6['o'] << endl;

  // at() member function
  // can't create a element
  // can update a element
  // return the value if key is at present
  // throw exception if not present
  // constatnt complexity
  mp6.at('c') = 913; // mp6: a 100 b 261 c 913 s 200 z 230

  // =============== Modifiers =======================
  // ----- insert() -------
  // val
  // log(size)
  mp6.insert({'m', 990}); // mp6: a 100 b 261 c 913 m 990 s 200 z 230

  // range
  // if inserted container is sorted, coplexity linear(size+N)
  // if unsorted, Nlog(size+N)
  mp6.insert(mp5.begin(), mp5.find('z')); // mp6: a 100 b 261 c 913 m 990 o 0 s 200 x 200 z 230

  // initilizer_list
  // if inserted container is sorted, coplexity linear(size+N)
  // if unsorted, Nlog(size+N)
  mp6.insert({{'q', 12}, {'l', 2}, {'n', 17}}); // mp6: a 100 b 261 c 913 l 2 m 990 n 17 o 0 q 12 s 200 x 200 z 230

  // ------ erase() ------
  // value
  // log(size)
  mp6.erase('a'); // mp6: b 261 c 913 l 2 m 990 n 17 o 0 q 12 s 200 x 200 z 230

  // position
  // constant
  auto it = ++mp6.begin(); // points to c
  mp6.erase(it);           // mp6: b 261 l 2 m 990 n 17 o 0 q 12 s 200 x 200 z 230

  // range
  // complexity linear, dfrnc btwn first_ptr and last_ptr
  mp6.erase(mp6.begin(), mp6.find('m')); // mp6: m 990 n 17 o 0 q 12 s 200 x 200 z 230

  // =============== Operations =======================
  // find()
  // complexity log(size)
  // return its pointer if found
  // otherwise return its end() iterator
  it = mp6.find('q'); // it points to q

  // count()
  // complexity log(size)
  // for map return 1 if found otherwise 0
  unsigned int counter = mp6.count('s');

  for (auto it = mp6.begin(); it != mp6.end(); it++)
  {
    cout << it->first << " " << it->second << " ";
  }
}
