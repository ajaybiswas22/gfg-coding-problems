#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> A, int low, int high,int n)
{
    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(n<A[mid])
        {
            high = mid-1;
        }
        else if(n>A[mid])
        {
            low = mid+1;
        }
        else
            return mid;
    }
    return mid;
}

vector<int> nearestK(vector<int> V, int n, int k)
{
    int index = bs(V,0,V.size()-1,n);
    int count = 0;
    vector<int> arr;

    int i=index-1;
    int j=index;

    while(count<k && i>=0 && j <= V.size()-1)
    {
        if(abs(V[i] - n) <= abs(V[j] - n))
        {
            arr.push_back(V[i]);
            i--;
            count++;
        }
        else
        {
            arr.push_back(V[j]);
            j++;
            count++;
        }  
    }
    return arr;
}

void print(vector<int> V)
{
    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> V = {1,2,5,8,9,13,15,17,19,21,34,156};
    int n = 14, k = 4;
    //cout<<bs(V,0,V.size()-1,n);
    vector<int> arr = nearestK(V,n,k);
    print(arr);
}