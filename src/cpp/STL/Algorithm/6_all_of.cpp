/* all_of returns true if pred returns true for all the elements in the range [first,last) 
 * or if the range is empty, and false otherwise.
 * template <class InputIterator, class UnaryPredicate>
   bool all_of (InputIterator first, InputIterator last, UnaryPredicate pred);
*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    std::array<int,8> foo = {3,5,7,11,13,17,19,23};
    std::array<int,8> foo2 = {1,2,3,4,5,6,7,8};

    if ( std::all_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
        std::cout << "All the elements are odd numbers.\n";

    if ( std::all_of(foo2.begin(), foo2.end(), [](int i){return i>0;}) )
        std::cout << "All the elements are greater than zero.\n";

    return 0;
}