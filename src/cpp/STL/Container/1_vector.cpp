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
    for(int val: list)
        cout<<val;
}

int main()
{
    string str = "Char Vector Example";
    
    // empty caracter vector
    vector<char> empty_vec;
    // character vector
    vector<char> x(str.begin(),str.end());
    // int vector
    vector<int> v = {1,2,3,4,5};

    vector<int> vecte{ 10, 20, 30 };

    int n = 10;
    // Create a vector of size n with
    // all values as 20.
    vector<int> vect(n, 20);

    printString(x);
    cout<<endl;
    printInt(v);
    cout<<endl;
    cout<<vect[2]<<endl;

}