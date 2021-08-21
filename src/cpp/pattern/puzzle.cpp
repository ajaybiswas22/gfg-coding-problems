#include<iostream>
#include<vector>
using namespace std;

int minCost(vector<int> length, vector<int> cost, int n)
{
    int minn = 99999;
    for(int i=0;i<n;i++)
    {
        int cs = 0;
        for(int j=0;j<n;j++)
        {
            int tl = abs(length[i] - length[j]);
            cs = cs + tl * cost[j];
        }
        if(cs < minn)
        {
            minn = cs;
        }
    }
    return minn;
}

int main()
{
    vector<int> length = {1,2,3};
    vector<int> cost = {10,20,30};
    cout<<minCost(length,cost,3);
}