#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

// O(1) space
void arrange(vector<int> &Vec) {
        int N = Vec.size();
        for(int i = 0; i < N; ++i) {
            Vec[i] = Vec[i] + (Vec[Vec[i]]%N) * N;
        }

        for(int i = 0; i < N; ++i) {
            Vec[i] = Vec[i] / N;
        }
    }

int main()
{

    vector<int> a = {2,0,1,3};
    arrange(a);
    printList(a);   

}