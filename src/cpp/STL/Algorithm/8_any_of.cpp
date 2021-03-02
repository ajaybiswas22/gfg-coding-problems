
/* Returns true if an any element exists in a range satisfying the 
 * predicate.
 */

#include<bits/stdc++.h>

using namespace std;

int main() {

    std::array<int,5> foo = {3,4,6,8,10};
    std::array<int,8> foo2 = {-1,2,-3,-4,-5};

    if ( std::any_of(foo.begin(), foo.end(), [](int i){return i%2;}) )
        std::cout << "Any of are odd numbers.\n";

    if ( std::any_of(foo2.begin(), foo2.end(), [](int i){return i>0;}) )
        std::cout << "Any of elements are greater than zero.\n";

    return 0;
}