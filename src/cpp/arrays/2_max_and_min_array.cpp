#include<iostream>
using namespace std;

void find_max_min(int arr[],int n)
{
    int gmax = arr[0],gmin = arr[0];

    for(int i = 1; i < n; i++)
    {
        if (gmax < arr[i])
            gmax = arr[i];
        if (gmin > arr[i])
            gmin = arr[i];
    } 
    cout<<"Max: "<<gmax<<endl;
    cout<<"Min: "<<gmin<<endl;
}

int main()
{
    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];

    find_max_min(array,n);
    
    return 0;
}