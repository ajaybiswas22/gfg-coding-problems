#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

vector<int> solve(vector<int> &A) {
    
    vector<int> B;
    
    int pos = 0;
    int n = A.size();
    
    while(A[pos] < 0)
    {
        pos++;
    }
    
    // move mark right
    int mark = pos;
    // move mark2 left (negatives)
    int mark2 = mark - 1;
    
    while(mark2 >= 0 && mark < n)
    {
        if(abs(A[mark2]) < A[mark])
        {
            B.push_back(A[mark2]*A[mark2]);
            mark2--;
        }
        else if(abs(A[mark2]) >= A[mark])
        {
            B.push_back(A[mark]*A[mark]);
            mark++;
        }
    }
    
    if(mark2 >= 0)
    {
        while(mark2 >= 0)
        {
            B.push_back(A[mark2]*A[mark2]);
            mark2--;
        }
    }
    else if(mark < n)
    {
        while(mark < n)
        {
            B.push_back(A[mark]*A[mark]);
            mark++;
        }
    }

    return B;
}

int main()
{
    vector<int> A = {-3,-2,-1,1,2,3};
    vector<int> B = solve(A);
    printList(B);
}
