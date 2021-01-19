#include<iostream>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
} 

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
} 

void move_neg_side(int arr[],int n)
{
    // we need two pointers, one will be searching for negatives,
    // other will be moving counter forward

    int i=0,j=0;

    while(i < n)
    {
        if(arr[i] < 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        i++;
    }
}

int main()
{

    int n;
    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];

    move_neg_side(array,n);
    printArray(array,n);

    return 0;
}