#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &A)
{
    int count0 = 0;
    int count1 = 0;
    int j=0;

    for(int i=0;i<A.size();i++)
    {
        if(A[i] == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }

    while(count0 >= 0)
    {
        A[j] = 0;
        j++;
        count0--;
    }
    while(count1 >= 0)
    {
        A[j] = 1;
        j++;
        count1--;
    }
}
void sort(vector<int> &A)
{
    int n = A.size();

    // bubble sort
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

}
int main()
{



}