#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int t1;
    
    // Auxiliary Space Complexity O(1)
    t1 = arr[n-1];
    
    // Auxiliary Time Complexity O(N)
    for(int i = n-2; i >= 0 ; i--)
    {
        arr[i+1] = arr[i];
    }
    
    arr[0] = t1;
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
} 

int main()
{
    int n,m;

    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];

    rotate(array,n);
    printArray(array,n);

    return 0;
}