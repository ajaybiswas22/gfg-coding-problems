//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    int f1 = 1;
    int f2 = 1;
    int f3;
    for(int i=1;i<n;i++)
    {
        if(f1 + f2 > 1000000007)
        {
            f3 = (f1 + f2)-(1000000007);
        }
        else
        {
            f3 = f1+f2;
        }
        
        f1 = f2;
        f2 = f3;
    }
    return f1;
}
 
int main ()
{
    int n = 5;
    cout << fib(n);
    return 0;
}
