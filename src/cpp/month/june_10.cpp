#include<bits/stdc++.h>
using namespace std;
int divide(int A, int B) {
    
    int status = 1;
    long count = 0;
    long int AA = A;
    long int BB = B;
    
    if(BB == 1)
    {
        if(AA > INT_MAX)
        {
            return INT_MAX;
        }
        return AA;
    }
    
    if(A<0 && B<0)
    {
        status = 1;
    }
    else if(A<0 || B<0)
    {
        status = -1;
    }
    else
    {
        status = 1;
    }
    
    AA = abs(AA);
    BB = abs(BB);
    
    while(AA>=BB)
    {
        AA = AA-BB;
        count++;
    }
    
    if(count > INT_MAX)
        count = INT_MAX;
    
    count = count*status;
    
    return count;
}

int main()
{
    int A = -22;
    int B = -1;
    cout<<divide(A,B);
}