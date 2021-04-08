#include<bits/stdc++.h>
using namespace std;

int getMax(int A,int B)
{
    return A>B?A:B;
}
int getMin(int A,int B)
{
    return A<B?A:B;
}
int median_diff(vector<int> A, vector<int> B, int low1, int high1, int low2, int high2 ) {

    if((high1 - low1) + 1  > (high2 - low2) + 1 )
    {
       // cout<<"teloooo";
        return median_diff(B,A,low2,high2,low1,high1);
    }

    int median1 = low1 + (high1 - low1)/2;
    int median2 = low2 + (high2 - low2)/2;

    if(((high1 - low1) + 1) == 2 && ((high2 - low2) + 1) >= 2)
    {
      //  cout<<"geloooo";
        int x = getMax(A[low1],B[low2]);
        int y = getMin(A[high1],B[high2]);
        return getMin(x,y);
    }
    
    if(((high1 - low1) + 1) == 2 && ((high2 - low2 )+ 1)>2)
    {
       // cout<<"heloooo";
        vector<int> C;
        for(int i=low2; i<=high2;i++)
        {
            C.push_back(B[i]);
        }
        C[0] = getMax(A[low1],B[low2]);
        C[C.size()-1] = getMin(A[high1],A[high2]);
        sort(C.begin(),C.end());
        return C[C.size()/2];
    }

    if(A[median1] < B[median2])
    {
       // cout<<"meloooo";
        low1 = median1;
        high2 = median2;
        return median_diff(A,B,low1,high1,low2,high2);
    }
    else if (B[median2] < A[median1])
    {
       // cout<<"seloooo";
        low2 = median2;
        high1 = median1;
        return median_diff(A,B,low1,high1,low2,high2);
    }
}
int main()
{
    vector<int> A {2,3};
    vector<int> B {4,8,12};
    int high1 = A.size()-1;
    int high2 = B.size()-1;
    cout<<median_diff(A,B,0,high1,0,high2);
}