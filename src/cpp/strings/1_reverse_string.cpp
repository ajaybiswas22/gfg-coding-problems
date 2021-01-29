#include<bits/stdc++.h>

using namespace std;

void reverseString(vector<char>& s) {
    
    // reverse using STL reverse 
    //reverse(s.begin(), s.end());

    vector<char>::iterator first, last;

    first = s.begin();
    last = s.end()-1;

    while(first < last)
    {
        iter_swap(first,last);
        first++;
        last--;
    }
}

void printString(vector<char>& s){

    for (const char &c: s)
        std::cout << c;
}

int main(void)
{
    vector<char> str;

    string s = "Hello World";
    vector<char> v(s.begin(), s.end());

    printString(v);
    cout<<endl;
    reverseString(v);
    printString(v);
    cout<<endl;

    system("PAUSE");
}