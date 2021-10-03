#include<bits/stdc++.h>
using namespace std;

int min_cost_path(vector<vector<int>> A,int r,int c)
{
    int n = A.size();

    if(r == n-1 && c <= n-1 && c >= 0)
        return A[r][c];
    
    if(r <= n-1 && c >=0 && c <= n-1)
    {
        return std::min({A[r][c] + min_cost_path(A,r+1,c), 
                        A[r][c] + min_cost_path(A,r+1,c-1),
                        A[r][c] + min_cost_path(A,r+1,c+1)});
    }
    else
        return INT_MAX-INT_MAX/2;

}

int min_fall_path(vector<vector<int>> A)
{
    int minn = INT_MAX;

    for(int i=0;i<A.size();i++)
    {
        minn = std::min( minn,min_cost_path(A,0,i));
    }
    return minn;
}

int main()
{
    vector<vector<int>> A = { {12,5,1},
                              {1,5,6},
                              {1,8,9} };
    
    cout<<min_fall_path(A);
    return 0;
}