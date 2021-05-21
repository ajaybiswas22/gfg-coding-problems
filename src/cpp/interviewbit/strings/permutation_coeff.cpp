#include<bits/stdc++.h>
using namespace std;

int perm_coeff(int n,int k)
{
    vector<int> v(n-k,0);

    v[0] = n-k+1;
    for(int i=1;i<k;i++)
    {
        v[i] = v[i-1]*(v[0]+i);
    }
    return v[k-1];
    
}
int main()
{
    int n = 10,k=3;

    cout<<perm_coeff(n,k);
}
