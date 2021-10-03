#include<bits/stdc++.h>
using namespace std;

int minSteps(int m, int n)
{
    if(m==1 || n==1)
        return 1;
    if(m==0 || n==0)
        return 0;
    
    return minSteps(m-1,n) + minSteps(m,n-1);
}

int minStepsMem(vector<vector<int>> &table, int m, int n)
{
    if(table[m][n] != -1)
        return table[m][n];
    if(m==1 || n==1)
        return 1;
    if(m==0 || n==0)
        return 0;

    return table[m][n] = minSteps(m-1,n) + minSteps(m,n-1);
    
}

int main()
{
    int m,n;
    m = 5;
    n = 5;
    vector<vector<int>> table(m+1,vector<int>(n+1,-1));
    cout<<minStepsMem(table,m,n);
    return 0;
}