#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void printInt(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
    cout<<endl;
}

int main()
{
    
    int n = 36; // find factors of 36
    vector<int> a;
    for(int i=1; i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            a.push_back(i);

            if(i!=sqrt(n))  // comparing int with double
                a.push_back(n/i);
        }   

    }
    sort(a.begin(),a.end());

    printInt(a);
    
}
