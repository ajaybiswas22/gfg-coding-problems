#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
} 

void findUnion(int arr1[],int arr2[], int n, int m)
{
    // union of two sorted arrays

    int p=0,q=0,r=0;
    int arr3[n+m];

    while(p < n && q < m)
    {

        if(arr1[p] < arr2[q])
        {
            arr3[r] = arr1[p];
            p++;
        }
        else if(arr1[p] > arr2[q])
        {
            arr3[r] = arr2[q];
            q++;
        }
        else if(arr1[p] == arr2[q])
        {
            arr3[r] = arr1[p];
            p++;
            q++; 
        }
        r++;
    }

    // copy remaining elements from the longer array
    if(n > m)
    {
        while(p < n)
        {
            arr3[r] = arr1[p];
            p++;
            r++;
        }
    }
    else if(n < m)
    {
        while(q < m)
        {
            arr3[r] = arr2[q];
            q++;
            r++;
        }
    }

    printArray(arr3,r);
}

void findIntersection(int arr1[],int arr2[], int n, int m)
{
    // intersection of two sorted arrays
    int a = (n>m)?n:m;
    int arr3[a];
    int p=0,q=0,r=0;

    while(p < n || q < m)
    {
        if(arr1[p] < arr2[q])
            p++;
        else if(arr1[p] > arr2[q])
            q++;
        else if(arr1[p] == arr2[q])
        {
            arr3[r] = arr1[p];
            p++;
            q++; 
            r++;
        }
        
    }
    printArray(arr3,r);
}

int main()
{
    int n,m;

    cin>>n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin>>array[i];
    
    cout<<endl;
    cin>>m;
    int array2[m];
    for(int i = 0; i < m; i++)
        cin>>array2[i];

    cout<<"\nUnion\n";
    findUnion(array,array2,n,m);
    cout<<"\nIntersection\n";
    findIntersection(array,array2,n,m);

    return 0;
}