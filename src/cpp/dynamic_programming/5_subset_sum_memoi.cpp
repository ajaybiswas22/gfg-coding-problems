#include<bits/stdc++.h>

bool subsetSum(std::vector<int> val,int n,int sum, std::vector<std::vector<bool> > &table)
{
    if(sum == 0)
        return true;
    else if(n == 0)
        return false;
    
    if(table[n][sum] != -1)
        return table[n][sum];

    if(val[n-1] <= sum)
        return table[n][sum] = subsetSum(val,n-1,sum-val[n-1],table) || subsetSum(val,n-1,sum,table);
    else
        return table[n][sum] = subsetSum(val,n-1,sum,table);
}

int main()
{
    std::vector<int> val = {1,2,9};
    int n = 3;
    int sum = 11;
    int j = std::accumulate(val.begin(),val.end(),0);
    std::vector<std::vector<bool> > table (n+1,std::vector<bool> (j+1,-1));

    std::cout<<subsetSum(val,n,sum,table);
}