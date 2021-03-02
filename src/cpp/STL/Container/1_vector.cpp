#include<bits/stdc++.h>
using namespace std;

void printString(vector<char> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(const char &val: list)
        cout<<val;
}

void printInt(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val;
}

int main()
{
    string str = "Char Vector Example";
    
    // character vector
    vector<char> x(str.begin(),str.end());
    // int vector
    vector<int> v = {1,2,3,4,5};

    printString(x);
    cout<<endl;
    printInt(v);

}