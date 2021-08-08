#include<bits/stdc++.h>

int knapsack_01(std::vector<int> val, std::vector<int> wt, int W, int n)
{
    std::vector<std::vector<int>> table(n+1,std::vector<int> (W+1,-1));

    // n = 0 means no item left, W = 0 means no capacity
    /*  // recursive solution base case
    if(n == 0 || W == 0)
        return 0;           // profit 0
    */

    // filling first row and column to 0
    for(int i=0;i<=n;i++)
    {
        table[i][0] = 0;
    }
    for(int j=0;j<=W;j++)
    {
        table[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=W;j++)
        {
            if(wt[i-1] <= j)     // it fits
            {
                // include or exclude item
                table[i][j] = std::max(val[i-1] + table[i-1][j - wt[i-1]], table[i-1][j]);
            }
            else                // does not fit
            {
                // exclude item
                table[i][j] = table[i-1][j];
            }
        }
    }

    return table[n][W];

}

int main()
{
    std::vector<int> val = {3,4,7,6,18};
    std::vector<int> wt = {1,2,3,4,5};
    int W = 6, n = 5;
    std::cout<<knapsack_01(val,wt,W,n)<<"\n";
    return 0;
}