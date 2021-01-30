#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(vector<char>& s) {

    vector<char>::iterator first, last;
    bool status = true; // initially setting status to true

    first = s.begin();
    last = s.end()-1;

    while(first < last)
    {
        if(*first != *last) {
            status = false;
            break;
        }        
        first++;
        last--;
    }

    return status;
}

void printString(vector<char>& s){

    for (const char &c: s)
        std::cout << c;
}

int main(void)
{
    vector<char> str;

    string s = "racecar";
    vector<char> v(s.begin(), s.end());

    printString(v);
    cout<<endl;
    cout<<checkPalindrome(v)<<endl;

    system("PAUSE");
}