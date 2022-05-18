#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

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

void swapFour(int *p1, int *p2, int *p3, int *p4)
{
    int temp = *p2;
    *p2 = *p1;
    *p1 = *p4;
    *p4 = *p3;
    *p3 = temp;

}

void rotate(vector<vector<int>> &A)
{
    int N = A.size();

    for (int i=0;i<N/2;i++)
    {
        for(int j=i;j<N-i-1;j++)
        {
            int *p1 = &A[i+j][i];
            int *p2 = &A[N - 1 - i][i+j];
            int *p3 = &A[N - 1 - i - j][N - 1 - i];
            int *p4 = &A[i][N - 1 - i - j];
            swapFour(p1, p2, p3, p4);
        }  
    }
}

int main()
{

    vector<vector<int>> A = { {1,2,3,4},
                              {5,6,7,8},
                              {9,10,11,12},
                              {13,14,15,16} };

    /*
    4 8 12 16
    3 7 11 15
    2 6 10 14
    1 5  9 13 
    */
   
    rotate(A);
    printMatrix(A);
    cout<<"\n";
    return 0;
}