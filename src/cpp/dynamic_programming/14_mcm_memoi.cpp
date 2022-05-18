#include<iostream>
#include<vector>
using namespace std;

int mcm(int arr[],int i, int j,vector<vector<int> > &table)
{
    if(i >= j)
        return 0;

    if(table[i][j] != -1)
        return table[i][j];

    int minn = INT_MAX;
    
    for(int k=i;k<j;k++)
    {
        int temp = mcm(arr,i,k,table) + mcm(arr,k+1,j,table) + arr[i-1]*arr[k]*arr[j];
        minn = std::min(temp,minn);
    }
    return table[i][j] = minn;
}

int main()
{
    int arr[] = {1,2,3,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int> > table(n+1,vector<int>(n+1,-1));
    cout<<mcm(arr,1,n-1,table);
}