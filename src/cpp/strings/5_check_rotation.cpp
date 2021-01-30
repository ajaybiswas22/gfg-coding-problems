// program to determine whether a string is rotation of another string or not

#include<iostream>
using namespace std;

bool checkRotation(string s1, string s2)
{
    if(s1.length() != s2.length())
        return false;
    string temp = s2 + s2;
    return (temp.find(s1) != string::npos);     // string::npos == -1
}

int main()
{
    string s1 = "hello";
    string s2 = "llohe";

    cout<<checkRotation(s1,s2)<<endl;
    system("PAUSE");

}