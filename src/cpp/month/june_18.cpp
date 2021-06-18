#include<bits/stdc++.h>
using namespace std;

// trailing zeros binary
int solve(int A) {

    int x,count = 0;
    while ( A>0)
    {
        x = A%2;
        A = A/2;
        if(x == 1)
            break;
        count++;
    }
    return count;
}

int main()
{
    cout<<solve(18)<<endl;
}
