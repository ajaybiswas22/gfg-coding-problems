#include<bits/stdc++.h>

bool subsetSum(std::vector<int> val,int n,int sum)
{
    if(sum == 0)
        return true;
    else if(n == 0)
        return false;

    if(val[n-1] <= sum)
        return subsetSum(val,n-1,sum-val[n-1]) || subsetSum(val,n-1,sum);
    else
        return subsetSum(val,n-1,sum);
}

int main()
{
    std::vector<int> val = {1,2,9};

    std::cout<<subsetSum(val,3,10);
}