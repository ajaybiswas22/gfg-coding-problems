#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool isPalindrome(int A)
{  
    if(A<0)
        return 0;
        
    int count = 0;
    int Ac = A;
    int reversedNumber=0,rem;
    
    
    while(Ac != 0) {
        rem = Ac%10;
        reversedNumber = reversedNumber*10 + rem;
        Ac /= 10;
    }
    
    while(A> 0)
    {
        if(reversedNumber%10 != A%10)
            return false;
        A = A/10;
        reversedNumber = reversedNumber/10;
    }
    
    return true;
}
int main()
{
    int A = 12321;

    cout<<isPalindrome(A)<<endl;
}