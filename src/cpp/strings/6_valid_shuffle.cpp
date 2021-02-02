// program to check whether a string is valid shuffle of other two or not

#include<bits/stdc++.h>
using namespace std;

class Counter
{
    public:

    map<char,int> duplicateList1;
    map<char,int> duplicateList2;
    
    // identifying duplicates in a string str.
    // b is true if str is the string to which other 
    // two are compared.
    void duplicates(string str,bool b)
    {
        vector<char> v(str.begin(), str.end());

        if(b)
        {
        // create pairs of characters and frequencies
            for (const char &c: v)
                duplicateList1[c] += 1;
        }
        else
        {
            for (const char &c: v)
                duplicateList2[c] += 1;
        }

        
    }

    // compares two hashmaps for equality,
    // the two duplicate maps/list are compared
    bool check()
    {
        if(duplicateList1 == duplicateList2)
            return true;
        else
            return false;
    }
};

bool checkShuffle(string s1, string s2, string s3)
{
    string str = s2+s3;
    
    if(s1.length() != str.length())
        return false;

    Counter c;

    c.duplicates(s1,true);
    c.duplicates(str,false);
    return c.check();

}

int main()
{
    string s1 = "codingchallenge";
    string s2 = "codign";
    string s3 = "achllenge";
    cout<<checkShuffle(s1,s2,s3)<<endl;

    system("PAUSE");
}