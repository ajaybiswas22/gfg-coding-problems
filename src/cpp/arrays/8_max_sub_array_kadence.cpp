#include<iostream>
#include<climits>
using namespace std;

int maxSum(int arr[], int n)
{
    int max_sum = INT_MIN;
    int max_end = 0;

    for (int i=0;i<n;i++)
    {
        max_end = max_end + arr[i];

        if(max_sum < max_end)
            max_sum = max_end;

        if(max_end < 0)
            max_end = 0;
    }
    return max_sum;
}

int main(void)
{

    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];

    int x = maxSum(array,n);
    cout<<x<<endl;
    return 0;
}