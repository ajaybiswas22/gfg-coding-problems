#include<bits/stdc++.h>
using namespace std;

/*
Given an integer array A of size N.
You need to find the value obtained by XOR-ing the contiguous subarrays, 
followed by XOR-ing the values thus obtained. Determine and return this value.
*/
// even size array will have xor zero
// in odd size array, only the odd term will get zor-ed
int solve(vector<int> &A) {
    int res = 0;

    if(A.size() % 2 == 0)
        return 0;

    for(int i=0;i<A.size();i = i+2)
    {
        res = res ^ A[i];
    }
    return res;
}

// Each term occurs k*(N-k+1)

// brute force approach: use two for loops and xor the subarrays

int main()
{
    vector<int> A={1,2,3,4,5};
    cout<<solve(A)<<endl;
}
