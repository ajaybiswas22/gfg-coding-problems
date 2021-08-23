#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int tri_sum(vector<int> A, int N)
{
    if(A.size() < 3)
        return 0;
    
    int i=0,j=1,k=2;
    int trav_i = i;
    int count = 0;
    int cnt = 0;
    sort(A.begin(),A.end());

    while(k<N)
    {
        if(A[trav_i] + A[j] == A[k])
        {
            count++;
            cout<<A[trav_i]<<" "<<A[j]<<" "<<A[k]<<"\n";
            i++;
            j++;
            k++;
            trav_i = i;
        }
        else if(A[trav_i] + A[j] < A[k])
        {
            i++;
            j++;
            k++;
            trav_i=i;
        }
        else
        {
            trav_i--;
            if(trav_i<0)
            {
                i++;
                j++;
                k++;
                trav_i=i;
            }
        }
        cnt++;
    }
    cout<<"complexity: "<<cnt<<"\n";
    return count;
}

int main()
{
    vector<int> A = {16,13,24,65,1,2,14,3,9,12,21,90,84};
    int N = A.size();

    cout<<tri_sum(A,N);
}