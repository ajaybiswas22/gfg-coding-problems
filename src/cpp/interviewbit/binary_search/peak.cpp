#include<bits/stdc++.h>
using namespace  std;

int dbinary(vector<int> &A, int B,int low, int high)
{
    int mid;

    while(low <= high)
    {
        mid = low + (high-low)/2;

        if(B < A[mid])
        {
            low = mid + 1;
        }
        else if(B > A[mid])
        {
            high = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;

}

int binary(vector<int> &A, int B,int low, int high)
{
    int mid;

    while(low <= high)
    {
        mid = low + (high-low)/2;

        if(B > A[mid])
        {
            low = mid + 1;
        }
        else if(B < A[mid])
        {
            high = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;

}

int findPeak(vector<int> &A)
{
    int low = 0;
    int high = A.size()-1;
    int mid;

    while(low <= high)
    {
        mid = low + (high-low)/2;

        if(A[mid] > A[mid-1] && A[mid] > A[mid+1]){
            return mid;
        }
        else if(A[mid] > A[mid-1])
        {
            low = mid+1;
        }
        else if(A[mid] < A[mid-1])
        {
            high = mid-1;
        }

    }
    return -1;
}

int bs(vector<int> &A, int low, int high)
{
    int mid=low+((high-low)/2);

    if(A[mid-1]<A[mid] && A[mid+1]<A[mid])
    {
        return mid;
    }
    else if(A[mid-1]<A[mid])
    {
        return bs(A,mid+1,high);
    }
    else if(A[mid+1]<A[mid])
    {
        return bs(A,low,mid-1);
    }
    return -1;
}

int main()
{
    vector<int> A = {5, 6, 7, 8, 9, 10, 3, 2, 1};
    int val = 3;
    int pos = findPeak(A);

    if(A[pos] == val )
    {
        cout<<pos<<endl;
        return 0;
    }
  
    int p1 = binary(A,val,0,pos-1);
    int p2 = dbinary(A,val,pos+1,A.size()-1);

    cout<<"P1 = "<<p1<<" P2 = "<<p2<<endl;
    if(p1 == -1 && p2 == -1)
    {
        cout<<-1;
    }
    else if(p1 == -1)
    {
        cout<<p2;
    }
    else if(p2 == -1)
        cout<<p1;

    return 0;
}