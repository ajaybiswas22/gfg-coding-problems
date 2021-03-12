#include<bits/stdc++.h>
using namespace std;

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

long long factorial(int val)
{
    if(val == 0)
        return 1;
    long long temp = 1;
    while(val > 0)
    {
        temp = temp * val;
        val--;
    }
    return temp;
}

vector<int> getRow(int A) {

    vector<int> a;

    for(int i=0;i<=A;i++)
    {
        a.push_back((long long)factorial(A)/(factorial(i)*factorial(A-i)));
    }
    return a;
}

int main()
{
    int A = 5;

    printList(getRow(A));
}
