#include<bits/stdc++.h>
using namespace std;
// time limit exceeded
int odd(vector<int> A)
{
    int sum = 0;
    for(int i=1;i<A.size();i = i+2)
    {
        sum += A[i];
    }
    return sum;
}

int even(vector<int> A)
{
    int sum = 0;
    for(int i=0;i<A.size();i = i+2)
    {
        sum += A[i];
    }
    return sum;
}

int solve(vector<int> &A) {
    
    int count = 0;
    int tot = odd(A) + even(A);
    for(int i=0; i<A.size();i++)
    {
        vector<int> cp;
        cp = A;
        cp.erase(cp.begin() + i);
        
        int od = odd(cp);
        if(od == tot - od - A[i] )
        {
            count++;
        }
    }
    
    return count;
}

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

int main()
{
    vector<int> A = {2,1,6,4};
    cout<<solve(A)<<endl;
}