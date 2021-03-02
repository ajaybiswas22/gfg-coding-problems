#include<bits/stdc++.h>
using namespace std;

void printInt(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val;
    cout<<endl;
}

int main()
{
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"At 0: "<<v.at(0)<<endl;          // element at index 0
    cout<<"Size: "<<v.size()<<endl;         // no. of elements  
    cout<<"Capacity: "<<v.capacity()<<endl; // capacity of the array

    v.clear();                              // removes all element
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

}