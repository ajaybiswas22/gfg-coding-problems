#include<bits/stdc++.h>
using namespace std;

void printList(vector<char> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(const char &val: list)
        cout<<val;
}
int main()
{
    string str = "kiwis";
    vector<char> x(str.begin(),str.end());

    remove_copy(x.begin(),x.end(),x.begin(),'k');
    printList(x);

}