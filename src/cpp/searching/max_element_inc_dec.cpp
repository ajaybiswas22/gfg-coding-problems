#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<int> A) {

    int low = 0;
    int high = A.size() - 1;
    int mid;
    int l,r;

    while(low < high) {

        mid = low + (high-low)/2;
        l = mid - 1;
        r = mid + 1;

        if(A[mid] < A[r])
        {
            low = mid + 1;
        }
        else if (A[mid] <= A[l])
        {
            high = mid - 1;
        }
        else if (A[l] < A[mid] && A[mid] > A[r])
        {
            return A[mid];
        }
    }

}

int main()
{
    vector<int> A{1,2,3,4,8,8,3,1,0};
    cout<<maxElement(A);
}