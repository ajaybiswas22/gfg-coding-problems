#include<bits/stdc++.h>

using namespace std;

// prints a vector<int> List
void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

int main()
{
    vector<int> list = {67,72,56,12,0,-3,21,9,10,100};
    cout<<"Original List: ";
    printList(list);

    // std::replace
    // replaces occurances of old value with new value
    replace(list.begin(),list.end(),72,27);
    cout<<"\nAltered List: ";
    printList(list);

    return 0;
}
