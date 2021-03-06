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
    // shuffing the list
    random_shuffle(list.begin(),list.end());
    cout<<"\nShuffled List: ";
    printList(list);

    return 0;
}
