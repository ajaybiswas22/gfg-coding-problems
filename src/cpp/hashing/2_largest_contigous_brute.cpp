#include<bits/stdc++.h>
using namespace std;

vector<int> lszero(vector<int> &A) {

    int n = A.size();
    int maxs = INT_MIN;
    int i,j;
    int tempi=-1,tempj=-2;
    unordered_map<int,int> umap;

    for(int i=0;i<n;i++)
    {
        int sums = 0;
        for(int j=i;j<n;j++)
        {
            sums+= A[j];
            if(sums == 0)
            {
                if(maxs < j-i)
                {
                    maxs = j-i;
                    tempi = i;
                    tempj = j;
                }
            }
        }
    }

    vector<int> V;
    for(int a=tempi;a<=tempj;a++)
    {
        V.push_back(A[a]);
    }
    return V;
}

int main()
{
    vector<int> V = {3,4,1,-1,2,-2,6};
    vector<int> A = lszero(V);
}