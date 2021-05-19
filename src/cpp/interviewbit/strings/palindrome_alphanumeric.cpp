#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string A) {
    
    vector<int> x;
    
    for(int i=0;i<A.length(); i++)
    {
        if(isalnum(A[i]))
        {
            x.push_back(tolower(A[i]));
        }
    }
    for(int i=0, j=x.size()-1; i<x.size()/2;i++,j--)
    {
        if(x[i] != x[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s = "race caR";
    cout<<isPalindrome(s)<<endl;
}
