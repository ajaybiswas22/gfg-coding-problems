#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

vector<int> solve(vector<int> &A) {
    
    int n = A.size();
    int rmax = A[n-1];
    
    vector<int> s;
    
    s.push_back(rmax);
    
    for(int i = n-2; i >= 0; i--)
    {
        if(A[i] > rmax)
        {
            s.push_back(A[i]);
            rmax = A[i];
        }
    }
    
    return s;
}

int main()
{
    vector<int> A = {2,3,4,1,6,8,21,13,5};

    vector<int> B = solve(A);

    printList(B);
}