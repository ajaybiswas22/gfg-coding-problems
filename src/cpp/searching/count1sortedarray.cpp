#include<bits/stdc++.h>
using namespace std;

int countOne(vector<int> A)
{
    int low = 0, high = A.size()-1;
    int mid = low + (high-low)/2;
    int old = A[mid];

    if(A[high] == 1)
    {
        return A.size();
    }

    if(A[low] == 0)
    {
        return 0;
    }

    while(low<=high)
    {
        mid = low + (high-low)/2;
        
        if(A[mid] == 0)
        {
            high = mid - 1;
        }
        else if(A[mid] == 1)
        {
            low = mid + 1;
        }

        if(A[mid] != old)
        {
            break;
        }

    }

    if(A[mid] == 1)
    {
        while(mid < A.size()-1)
        {
            mid++;
            if(A[mid] == 0)
            {
                return mid;
            }
        }
    }
    else if(A[mid] == 0)
    { 
        while(mid > 0)
        {
            mid--;
            if(A[mid] == 1)
            {
                return mid+1;
            }
        }

    }
    return mid;
}

int main() {

    vector<int> A {1,1,1,1};
    cout<<countOne(A)<<endl;

}