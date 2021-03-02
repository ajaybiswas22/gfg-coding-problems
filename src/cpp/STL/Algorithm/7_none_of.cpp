/*  Checks that a predicate is false for at least an element
 *  of a sequence.
*/

#include<bits/stdc++.h>

using namespace std;

int main() {

    std::array<int,5> foo = {2,4,6,8,10};
    std::array<int,8> foo2 = {-1,-2,-3,-4,-5};

    if ( std::none_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
        std::cout << "None are odd numbers.\n";

    if ( std::none_of(foo2.begin(), foo2.end(), [](int i){return i>0;}) )
        std::cout << "No elements are greater than zero.\n";

    return 0;
}