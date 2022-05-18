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
    string str = "Hello World!";
    vector<char> vstr(str.begin(),str.end());

    // iterator to offset. Does not works with string as search element.
    auto it = find(vstr.begin(),vstr.end(),'o');
    if(it == vstr.end())
        cout<<"-1\n";

    cout<<"Offset: "<<it - vstr.begin()<<endl;
}