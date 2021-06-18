#include<bits/stdc++.h>
using namespace std;

/*
    Given an integer array A of N integers, 
    find the pair of integers in the array which have minimum XOR value. 
    Report the minimum XOR value.
*/
int findMinXor(vector<int> &A) {

    int min = 99999, res = 0;

    sort(A.begin(),A.end());

    for(int i=0;i<A.size()-1;i++)
    {
        res = A[i] ^ A[i+1];
        if(res == 0)
            return res;
            
        if(res < min)
        {
            min = res;
        }
        
    }
    return min;
}
int main()
{
    vector<int> A ={1,2,3,4,5,6};
    cout<<findMinXor(A)<<endl;
}
