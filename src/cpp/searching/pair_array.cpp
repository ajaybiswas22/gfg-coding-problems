#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> A, int val)
{
    int low = 0, high = A.size()-1;
    int mid;

    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(A[mid] < val)
        {
            low = mid + 1;
        }
        else if(A[mid] > val)
        {
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}


pair<int,int> findPair(vector<int> A,int num)
{
    pair<int,int> x;

    sort(A.begin(),A.end());

    int temp;
    int val1;

    for(int i=0;i<A.size();i++)
    {
        temp = num + A[i];
        val1 = binary(A,temp);
        if(val1 != -1)
        {
            x.first = A[i];
            x.second = temp;
            return x;
        }
    }
}


int main()
{
    vector<int> A = {10,20,30,48,50};
    int num = 30;
    pair<int,int> x = findPair(A,num);
    cout<<x.first<<" "<<x.second<<endl;
}