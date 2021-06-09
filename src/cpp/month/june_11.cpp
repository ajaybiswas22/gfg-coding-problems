#include<bits/stdc++.h>
using namespace std;

// Given an array of integers, every element appears twice except for one. Find that single one.
int singleNumber(const vector<int> &A) {
    
    int ans = A[0];
    for(int i=1;i<A.size();i++)
    {
       ans = ans ^ A[i]; 
    }
    
    return ans;
    
}

int main()
{
    vector<int> A = {1,1,2,3,4,2,3};
    cout<<singleNumber(A);
}