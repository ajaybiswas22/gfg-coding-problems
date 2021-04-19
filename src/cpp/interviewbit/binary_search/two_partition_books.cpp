#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> A={12,34,67,90};
    int B=2;
    int minn=9999;
    int maxx=-9999;
    int sum1=0,sum2=0;
    int split=A.size()-1;
    int i=0,j=i+1;
    while(split--)
    {
        //j=i+1;
        for(i=0; i<=split; i++)
        {
            sum1=sum1+A[i];
        }

        for(j=split+1; j<A.size(); j++)
        {
            sum2=sum2+A[j];    
        }
        
        if(sum1<sum2)
        {
            maxx=sum2;
        }
        else
        {
            maxx=sum1;
        }

        if(maxx < minn)
        {
            minn = maxx;
        }
        cout<<"max: "<<maxx<<"\n";
        sum1=0;
        sum2=0;
        
    }
   cout<<"min: "<<minn<<"\n";

}