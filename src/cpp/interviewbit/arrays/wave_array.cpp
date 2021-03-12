#include<bits/stdc++.h>
using namespace std;
void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

void wave(vector<int> &A) {
    
    int temp;
    
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i+=2)
    {
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
    }
}

int main()
{
    vector<int> A = {1,2,3,4,5};
    wave(A);

    printList(A);   
}