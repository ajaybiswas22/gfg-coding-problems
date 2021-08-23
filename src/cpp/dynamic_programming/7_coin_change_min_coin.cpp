#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int min_coins(vector<int> coins, int N, int V)
{
    vector<vector<int>> table(N+1,vector<int>(V+1));

    for(int j=0;j<=V;j++)
    {
        table[0][j] = INT_MAX-1;
    }
    for(int i=1;i<=N;i++)
    {
        table[i][0] = 0;
    }

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=V;j++)
        {
            if(i==1)
            {
                if( (j % coins[0]) == 0)
                    table[i][j] = j/coins[0];
                else
                    table[i][j] = INT_MAX-1;
            }
            else if(coins[i-1]<=j)
                table[i][j] = std::min(table[i][j-coins[i-1]]+1,table[i-1][j]);
            else
                table[i][j] = table[i-1][j];
        }
    }
    return table[N][V];

}

int main()
{
    vector<int> coins = {1,2,5};
    int V = 10, N = 3;
    cout<<min_coins(coins,N,V);
}