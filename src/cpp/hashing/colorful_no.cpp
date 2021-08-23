#include<bits/stdc++.h>
using namespace std;

/*
A number can be broken into different contiguous sub-subsequence parts. 
Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different
Example:

N = 23
2 3 23
2 -> 2
3 -> 3
23 -> 6
this number is a COLORFUL number since product of every digit of a sub-sequence are different. 

Output : 1
*/

vector<int> toVector(int A)
{
    vector<int> V;
    while(A>0)
    {
        V.insert(V.begin(),A%10);
        A = A/10;
    }
    return V;
}

int toIntegerProduct(vector<int> V, int i, int j)
{
    int x = 1;
    for(int k=j;k>=i;k--)
    {
        x*=V[k];
    }
    return x;
}

int colorful(int A) {

    vector<int> V = toVector(A);
    unordered_map<int,int> umap;

    for(int i=0;i<V.size();i++)
    {
        for(int j=i;j<V.size();j++)
        {
            int x = toIntegerProduct(V,i,j);
            if(umap.find(x)!=umap.end())
            {
                return 0;
            }
            else
                umap.insert({x,1});
        }
    }
    return 1;
}

int main()
{
    int N = 1234;
    cout<<colorful(1234);
}
