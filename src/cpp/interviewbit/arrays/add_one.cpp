#include<bits/stdc++.h>
using namespace std;

void addOne(vector<char> &A)
{
    while(A[0] == 0 && A.size() > 1)
    {
        A.erase(A.begin(),A.begin()+1);
    }

    int carry = 0;
    int x = 0;

    int pos = A.size() -1;

    x = A[pos];

    if(x == 9)
    {
        x = 0;
        carry = 1;
        A[pos] = x;

        while(carry != 0)
        {
            pos--;

            if(pos < 0)
            {
                A.insert(A.begin(),carry);
                break;
            }

            x = A[pos];

            if(x == 9)
            {
                x = 0;
                A[pos] = x;
            }
            else{
                A[pos] = ++x;
                carry = 0;
            }

        }
    }
    else
    {
        A[pos] = ++x;
    }
}

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

int main()
{
    vector<int> A = {9,9,9,9};

    while(A[0] == 0 && A.size() > 1)
    {
        A.erase(A.begin(),A.begin()+1);
    }

    int carry = 0;
    int x = 0;

    int pos = A.size() -1;

    x = A[pos];

    if(x == 9)
    {
        x = 0;
        carry = 1;
        A[pos] = x;

        while(carry != 0)
        {
            pos--;

            if(pos < 0)
            {
                A.insert(A.begin(),carry);
                break;
            }

            x = A[pos];

            if(x == 9)
            {
                x = 0;
                A[pos] = x;
            }
            else{
                A[pos] = ++x;
                carry = 0;
            }

        }
    }
    else
    {
        A[pos] = ++x;
    }

    printList(A);
}