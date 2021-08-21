#include<bits/stdc++.h>
using namespace std;
// a1 - a2 + a3 - a4 + ... (-1)^i*ak, where a1,a2.. are sets

long long sumA(vector<int> V, int low, int high)
{
    long long total = 0;
    for(int i=low;i<=high;i++)
    {
        total+=V[i];
    }
    return total;
}

long long partitionSum(vector<int> V,int low, int high)
{
    if(low == high)
        return V[low];
    else if(low > high)
        return 0;

    long long total = 0;   
    static long long maxx = sumA(V,low,high); 

    for(int i=low;i<high;i++)
    {
        total = partitionSum(V,low,i) + (-1)*partitionSum(V,i+1,high);
        maxx = std::max(total,maxx);
    }
    
    return maxx;
}

long long maxsum(vector<int> V,int N)
{
    return partitionSum(V,0,N-1);
}

int main()
{
    vector<int> V = {1,-2,-3,2,1};
    int N = 5;
    cout<<maxsum(V,5);
}