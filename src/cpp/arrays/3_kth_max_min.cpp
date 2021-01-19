#include<iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void find_kth_max_min(int arr[],int n,int k)
{
    // finding kth max and min using bubble sort

    /* In bubble sort algorithm, after each pass, the max (min)
     * element gets in position.
     */

    int i, j;  

    if(k > n)
    {
        cout<<"Invalid k"<<endl;
        return;
    }

    // kth largest
    for (i = 0; i < k; i++)      
        for (j = 0; j < n-i-1; j++)  
            if (arr[j] > arr[j+1])  
                swap(&arr[j], &arr[j+1]);  

    // largest element at n-1, k=1, so kth largest at n-k.
    cout<<"kth largest "<<arr[n-k]<<endl;

    // kth smallest
    for (i = 0; i < k; i++)      
        for (j = 0; j < n-i-1; j++)  
            if (arr[j] < arr[j+1])  
                swap(&arr[j], &arr[j+1]);  

    // smallest element at n-1, k=1, so kth smallest at n-k.
    cout<<"kth smallest "<<arr[n-k]<<endl;


}

int main()
{
    int n,k;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++)
        cin>>array[i];

    cin>>k;

    find_kth_max_min(array,n,k);

}