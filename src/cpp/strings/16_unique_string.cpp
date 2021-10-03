#include<iostream>
#include<stdio.h>
#include<unordered_set>
using namespace std;

bool isUnique(string str)
{
    unordered_set<char> set;
    int n = str.length();

    for(int i=0;i<n;i++)
    {
        if(set.find(str[i]) == set.end())
        {
            set.insert({str[i]});
        }
        else
            return false;
    }
    return true;
}
int main()
{
    char str[8] = "helo";
    cout<<isUnique(str);
}