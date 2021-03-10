#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B, int C, int D) {
    
    if(A==B && C==D)
        return 1;
    else if(A==C && B==D)
        return 1;
    else if(A==D && B==C)
        return 1;
    else
        return 0;
}

int main()
{
    cout<<solve(1,1,2,2)<<endl;
}
