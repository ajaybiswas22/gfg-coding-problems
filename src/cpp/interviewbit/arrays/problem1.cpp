#include<bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B) {
    // chess board distance
    
    int n = A.size();
    int distance = 0;
    
    vector<int> dist1;
    vector<int> dist2;
    
    vector<int> dist;
    
        for(int i=0;i<n-1;i++)
        {
            distance += min(abs(A[i] - A[i+1]), abs(B[i] - B[i+1]));
        
        }
    return distance;
}

int main()
{
    vector<int> A = {1,2,3,4,5};
    vector<int> B = {2,3,6,7,10};
    cout<<"Distance: "<<coverPoints(A, B)<<endl;
}
