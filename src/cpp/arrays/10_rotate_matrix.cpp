#include<bits/stdc++.h>
using namespace std;

void swapFour(int &x, int &y, int &z,int &a)
{
    int temp = x;
    x = y;
    y = z;
    z = a;
    a = temp;
}

void printMatrix(vector<vector<int>> A)
{
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            cout<<A[i][j]<< " ";
        }
        cout<<"\n";
    }
}
void rotate(vector<vector<int>> &A)
{
    int n = A.size();

    int *a,*b,*c,*d;        // a b
                            // c d
    
    for(int i=0;i<n/2;i++)      // outer to inner
    {    
        for(int j=0;j<n-i-1;j++)      // stop one before also stay in inner box
        {
            // place all pointers at each corner
            // move a right, c up, d left, b down (spins left side)
            a = &A[i][i+j];
            b = &A[i+j][n-1-i];
            c = &A[n-1-i-j][i];
            d = &A[n-1-i][n-1-i-j];
            swapFour(*a,*b,*d,*c);  
        }

    }
}

int main()
{

    vector<vector<int>> A = { {1,2,3,4},
                              {5,6,7,8},
                              {9,10,11,12},
                              {13,14,15,16} };

    printMatrix(A);
    rotate(A);
    cout<<"\n";
    printMatrix(A);
    return 0;
}