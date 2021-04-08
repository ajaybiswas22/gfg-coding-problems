#include<iostream>
#include<vector>
using namespace std;

int median(vector<vector<int> > &A)
{
    int n=A.size(), m=A[0].size();
    int min=INT32_MAX;
    int count=0;
    int med=(m*n/2)+1;
    int x;
    while(1)
    {
        for(int i=0; i<n; i++)
        {
            if(A[i].size()>0)
            {
                if(A[i][0]<min)
                {
                    min=A[i][0];
                    x=i;

                }
            }

        }
        count++;
        if(count==med)
        {
            break;
        }
        A[x].erase(A[x].begin());
        min=INT32_MAX;
    }
    return A[x][0];
}

int main()
{
    vector<vector<int>> A{{1,3,5},{2,6,9},{3,6,9}};
    cout<<median(A)<<"\n";
    return 0;
}