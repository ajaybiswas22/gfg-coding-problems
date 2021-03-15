#include<bits/stdc++.h>
using namespace std;

int solve(int A) {
    
    int steps = 1;
    int i = 0;
    A = abs(A);
    
    while(i < A || (i-A) % 2 != 0)
    {
        i = i + steps++;   
    }
    return steps-1;
}

int main()
{

    cout<<solve(4)<<endl;
    return 0;
}