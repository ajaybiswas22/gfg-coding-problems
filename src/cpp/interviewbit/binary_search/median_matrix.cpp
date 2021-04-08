#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &A)
{
    int min = INT32_MAX;
    int n = A.size(), m = A[0].size();
    int no = n*m;
    int val;
    int count = 0;
    pair<int,int> x;


    for(int k=0;k<no;k++) {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                val = A[i][j];
                if(val < min)
                {
                    min = val;
                    x.first = i;
                    x.second = j;
                }
            }
        }
        count++;
        if(count == (no/2)+1)
        {
            break;
        }
        A[x.first][x.second] = INT32_MAX;
        min = INT32_MAX;
    }
    return A[x.first][x.second];

}

int main()
{
    vector<vector<int>> A = {{1,3,5},{2,6,9},{3,6,9}};

    cout<<median(A)<<endl;
/*
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
*/
}