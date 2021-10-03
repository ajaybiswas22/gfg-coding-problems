#include<iostream>
using namespace std;

int mcm(int arr[],int i, int j)
{
    if(i >= j)
        return 0;

    int minn = INT_MAX;
    
    for(int k=i;k<j;k++)
    {
        int temp = mcm(arr,i,k) + mcm(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        minn = std::min(temp,minn);
    }
    return minn;
}

int main()
{
    int arr[] = {1,2,3,4,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<mcm(arr,1,n-1);
}