#include<bits/stdc++.h>
using namespace std;

int binomial(int n,int k)
{
    vector<vector<int> >v(n+1, vector<int> (n+1,0));

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)   // j <= min(i,k)
        {
            if(j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else 
            {
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
        }
    }

    return v[n][k];

}
int main()
{
    int n = 1,k=1;

    cout<<binomial(n,k);
}
