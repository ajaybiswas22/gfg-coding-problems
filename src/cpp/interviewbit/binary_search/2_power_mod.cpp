#include<bits/stdc++.h>
using namespace std;

/**
* An O(logn) solution to calculate power of a number. Suppose we want to calculate 3^64, 
* we can divide this into 3^32 * 3^32. 
* This process repeats until the base condition is reached.
* 
* @param x
*   An integer whose power has to be calculated
* @param n
*   An integer denoting power
* @param d
*   An integer to perform modulo
* @return 
*   Result of (x^n)%d as an integer.
*/
long long power(long long x,long long n,int d)
{
    
    // base conditions
    if(x == 0 && n == 0)
        return INT32_MAX;
    else if(x == 0)
        return 0;
    else if(n == 0)
        return 1;
    else if(n == 1)
        return x % d; 
    else if(n == 2)
        return (x*x) % d;  
    
    // recursion
    if(n%2 == 0)
    {
        return (power(x,n/2,d)*power(x,n/2,d))%d;
    }
    else
    {
        return (power(x,n/2,d)*power(x,(n/2)+1,d))%d;
    }

    /*
    else
        return x * power(x,n-1,d);  // recursive Solution NON BINARY 
    */
}

int main()
{
   int a = 64228540;
   int b = 77622773;
   int c = 88392672;
   long long x = power(a,b,c);

    if(x < 0)
    {
        cout<<c + (x % c);
    }
    else{
        cout<<x<<endl;
    }
}