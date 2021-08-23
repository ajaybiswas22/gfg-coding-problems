#include<iostream>
#include<unordered_map>
#include<climits>
#include<vector>
using namespace std;

void printmap(unordered_map<int,int> umap)
{
    cout<<"map\n";
    for( auto k : umap)
    {
        cout<<k.first<<" "<<k.second<<"\n";
    }
}

bool two_sum(vector<int> A,vector<int> B,int S)
{
    unordered_map<int,int> umap;

    for(int i=0;i<A.size();i++)
    {
        umap.insert(make_pair(S-A[i],A[i]));
    }

    //printmap(umap);

    for(int j=0;j<B.size();j++)
    {
        unordered_map<int,int>::iterator k = umap.find(B[j]);
        if(k != umap.end())
        {
            cout<<k->first<<" "<<k->second<<"\n";
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> A = {5,-3,7,9,18,-5,84,1,0,91};
    vector<int> B = {3,4,14,13,2,-4};
    int S = 93;

    cout<<two_sum(A,B,S);
}