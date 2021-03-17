#include<bits/stdc++.h>
using namespace std;

int gcd(int A,int B)
{
    if(A>B)
        return gcd(B,A);
        
    if(A == 0)
        return B;
    
    if(A == 0 && B == 0)
        return 0;
        
    for(int i=A;i>0;i--)
    {
        if(A%i == 0 && B%i == 0)
            return i;
    }
}

int cpFact(int A, int B) {

    for(int i = A; i>=1; i--)
    {
        if(A%i == 0)
        {
            if(gcd(i,B) == 1)
                return i;
        }
    }
    
}

int cpFact2(int A, int B) {
    int x;
    while((__gcd(B,A)!=1))
    {
        x=__gcd(B,A);
        A=A/x;
    }   
    return A;
}