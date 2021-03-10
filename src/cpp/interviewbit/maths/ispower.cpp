#include<bits/stdc++.h>
using namespace std;

int isPower(int A) {
    
    if(A == 1)
        return 1;
        
    if(A == 0)
        return 0;
        
    int flag = 0;
        
    // find lcm and see the factors
    
    for(int i = 2; i<=sqrt(A); i++)
    {
        flag = 0;
        if(A%i == 0)
        {
            int Ac = A;
            while(Ac>1)
            {
                if(Ac%i == 0)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
                Ac = Ac/i;
            }
            
            if(Ac <= 1)
            {
                break;
            }
        }
    }
    return flag; 
}


int main()
{
    cout<<isPower(536870912)<<endl;
}