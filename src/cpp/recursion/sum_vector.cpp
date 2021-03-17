#include<bits/stdc++.h>
using namespace std;
void sums(vector<int> &A, int start, int end)
{
    if(start == end)
        return;

    A[start] = A[start-1] + A[start]; 
    sums(A,++start,end);
}


int main()
{

    vector<int> x = {1,2,3,4,5};

    sums(x,1,5);
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }

}