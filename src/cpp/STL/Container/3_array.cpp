/*
 * The array is a container for constant size arrays. 
 * This container wraps around fixed size arrays and also doesn’t loose the information of 
 * its length when decayed to a pointer. 
 * references: 
 * https://www.geeksforgeeks.org/stdarray-in-cpp/
 * http://www.cplusplus.com/reference/array/array/
*/


#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> arr;

    // construction uses aggregate initialization 
    // double-braces required 
    array<int, 5> ar1{{3, 4, 5, 1, 2}}; 
    array<int, 5> ar2 = {1, 2, 3, 4, 5};
    array<char,4> str = {'a','b','c','d'};

    cout<<ar1[0]<<endl;

}