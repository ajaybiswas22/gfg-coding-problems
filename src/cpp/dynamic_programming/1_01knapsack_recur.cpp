#include<bits/stdc++.h>

int knapsack_01(std::vector<int> val, std::vector<int> wt, int W, int n)
{
    // n = 0 means no item left, W = 0 means no capacity
    if(n == 0 || W == 0)
        return 0;           // profit 0

    if(wt[n-1] <= W)     // it fits
    {
        // include or exclude item
        return std::max(val[n-1] + knapsack_01(val,wt,W - wt[n-1], n-1), knapsack_01(val,wt,W, n-1) );
    }
    else                // does not fit
    {
        // exclude item
        return knapsack_01(val,wt,W, n-1);
    }

}

int main()
{
    std::vector<int> val = {3,4,7,6,18};
    std::vector<int> wt = {1,2,3,4,5};
    int W = 6, n = 5;
    std::cout<<knapsack_01(val,wt,W,n);
    return 0;
}