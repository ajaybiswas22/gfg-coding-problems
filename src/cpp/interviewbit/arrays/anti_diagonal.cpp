#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
    
    int n = A.size();
    
    // 2*n - 1 rows
    vector<vector<int>> S(2*n-1);
    
    int count = 0;
    
    for(int i = 0; i<n; i++ )
    {
        for(int j = 0; j<n; j++)
        {
            S[j + count].push_back(A[i][j]);
        }
        count++;
    }
    return S;
}

int main()
{

}