#include<bits/stdc++.h>
using namespace std;

/*
 * You need to check that whether there exist a element which is strictly greater 
 * than all the elements on left of it and strictly smaller than all the elements on right of it.
 * If it exists return 1 else return 0.
 */
int perfectPeak(vector<int> &A) {
    
    int tillMax = A[0];
    int flag = 0;
    
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>tillMax)
        {
            for(int j = i+1; j<A.size();j++)
            {
                int nextMax = A[j];
                
                if(A[i] >= A[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0 && i!= A.size()-1 )
            {
                return 1;
            }
            
            tillMax = A[i];
        }
        
        flag = 0;
        
    }
    return 0;
}

int main()
{
    vector<int> A = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    cout<<perfectPeak(A)<<endl;
}