#include<bits/stdc++.h>
using namespace std;
// time limit exceeded
int solve(vector<int> &A, int B) {
    
    int l = A.size()-1;
    
    long int max = -999999;
    
    for(int i=0; i<=B; i++)
    {
        long int sum = 0;
        int j = B-i;
        
        for(int k = 0; k < i; k++)
        {
           sum+= A[k]; 
        }
        for(int m = 0; m < j; m++)
        {
            sum += A[l-m];
        }
        
        if(sum > max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    vector<int> A = {5, -2, 3 , 1, 2};
    cout<<solve(A,3)<<endl;
}