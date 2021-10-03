#include<iostream>
using namespace std;

int coin_change(int coins[],int n,int amount)
{
    int i = n-1;
    int ncoins = 0;

    while(amount > 0)
    {
        if(coins[i] <= amount)
        {
            int temp_coins = amount/coins[i]; 
            ncoins += temp_coins;
            amount = amount - temp_coins*coins[i];
        }
        else
        {
            i--;
        }
    }
    return ncoins;
}

int main()
{
    int coins[] = {1,2,5,10,50,100,500};
    int amount = 589;
    cout<<coin_change(coins,7,amount);
}