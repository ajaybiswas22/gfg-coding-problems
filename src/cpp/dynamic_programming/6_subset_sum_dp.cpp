#include<bits/stdc++.h>

bool subsetSum(std::vector<int> val,int n,int sum, std::vector<std::vector<bool> > &table)
{
    for(int i=0;i<=n;i++)       // zero sum no element
    {
        table[i][0] = 1;
    }

    for(int j=1;j<=sum;j++)     // no element j sum
    {
        table[0][j] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(val[i-1] <= j)
                table[i][j] = table[i-1][j-val[i-1]] || table[i-1][j];
            else
                table[i][j] = table[i-1][j];
        }
    }

    return table[n][sum];
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