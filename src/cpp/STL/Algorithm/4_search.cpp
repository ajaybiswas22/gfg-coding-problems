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
    vector<int> list = {67,72,56,12,0,-3,21,9,10,100,100};
    vector<int> predicate = {0,-3};
    
    cout<<"List: ";
    printList(list);

    /* std::search */

    // searches for predicate in a list
    auto it = search(list.begin(),list.end(),predicate.begin(),predicate.end());

    if(it != list.end())
        cout << "\nFound at offset: "<<it - list.begin()<<endl;
    else
        cout << "\nNot found"<<endl;

    /* std::search_n */

    int value = 100;
    int count = 2;

    // searches for consecutive predicate in a list and checking if 
    // iterator i1 contains end pointer of v1 or not 
    bool status = search_n(list.begin(), list.end(),count,value) != end(list);
    
    // output in true or false
    cout << std::boolalpha;
    cout <<"\n"<<count<<" times "<<value<<" present? : "<<status<<endl;

    return 0;
}
