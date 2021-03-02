// find_if_not example (negative example)
// http://www.cplusplus.com/reference/algorithm/find_if_not/
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if_not
#include <array>        // std::array

int main () {
  std::array<int,5> foo = {1,2,3,4,5};

  std::array<int,5>::iterator it =
    std::find_if_not (foo.begin(), foo.end(), [](int i){return i%2;} ); // i%2 returns true for odds
  std::cout << "The first even value is " << *it << '\n';

  return 0;
}