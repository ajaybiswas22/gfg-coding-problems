#include<bits/stdc++.h>

int knapsack_01(std::vector<int> val, std::vector<int> wt, std::vector<std::vector<int>> &table, int W, int n)
{
    // n = 0 means no item left, W = 0 means no capacity
    if(n == 0 || W == 0)
        return 0;           // profit 0

    if(table[n][W] != -1)       // if table entry is filled with value
        return table[n][W];

    if(wt[n-1] <= W)     // it fits
    {
        // include or exclude item
        return table[n][W] = std::max(val[n-1] + knapsack_01(val,wt,table, W - wt[n-1], n-1), 
                                                knapsack_01(val,wt,table, W, n-1) );
    }
    else                // does not fit
    {
        // exclude item
        return table[n][W] = knapsack_01(val,wt,table, W, n-1);
    }

}

void print(std::vector<std::vector<int>> table)
{
    int n = table.size();
    int W = table[0].size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<W;j++)
        {
            std::cout<<table[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}

int main()
{
    std::vector<int> val = {4,2,6};
    std::vector<int> wt = {1,2,3};
    int W = 4, n = 3;
    std::vector<std::vector<int>> table(n+1,std::vector<int> (W+1,-1));
    std::cout<<knapsack_01(val,wt,table,W,n)<<"\n\n";
    print(table);
    return 0;
}