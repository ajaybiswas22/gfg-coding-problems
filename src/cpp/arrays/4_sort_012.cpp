#include<iostream>
using namespace std;

void sort_012(int arr[],int n)
{
    // sorting without using any sorting algorithm
    int count_0 = 0, count_1 = 0, count_2 = 0;

    // we will be counting 0s,1s,2s and then refill the array
    // Time complexity O(n)
    // Space complexity O(3) = O(1) 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            count_0++;
        else if(arr[i] == 1)
            count_1++;
        else if(arr[i] == 2)
            count_2++;
        else
        {
            cout<<"Invalid element\n";
            return;
        }
    }

    //cout<<"counts: "<<count_0<<","<<count_1<<","<<count_2<<endl;

    // second pass, replace elements.
    // divided in three parts
    // Time complexity O(n)
    int k = 0;

    while(count_0 > 0)
    {
        arr[k] = 0;
        count_0--;
        k++;
    }
    while(count_1 > 0)
    {
        arr[k] = 1;
        count_1--;
        k++;
    }
    while(count_2 > 0)
    {
        arr[k] = 2;
        count_2--;
        k++;
    }
        
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
   cout << endl;
} 

int main()
{
    int n,k;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];   
    sort_012(array,n);
    printArray(array,n);  

    return 0;
}