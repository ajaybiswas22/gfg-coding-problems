#include<bits/stdc++.h>
using namespace std;

// try using iterative approach if exceeding time limit
int gcd(int A,int B)
{
    if(A>B)
        return gcd(B,A);
    
    if(A == 0)
        return B;

    if(B%A == 0)
        return A;
    
    return gcd(A,B%A);
}
int main()
{
    cout<<gcd(40,12)<<endl;

}