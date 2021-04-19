#include<bits/stdc++.h>
using namespace std;
int maxn(int a, int b)
{
    return a>b?a:b;
}
int dsum(int n)
{
    int sum=0,m;    
    while(n>0)    
    {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
    }
    return sum;    
}

int checkd(int n,int p,int B)
{
    while(n>0)    
    {    
        int x = n%10;    

        if(x == 0 || x > (p - B + 1))
            return -1;

        n=n/10;    
    }
    return 1;
    
}

int books(vector<int> &A, int B) {
    
    int n = A.size()-1;
    
    int start = pow(10,B-1);
    int end = pow(10,B);

    int minn = 999999;

    for(int i=start;i<end;i++)
    {
        // parsing digits and taking page sum
        if(dsum(i) ==  A.size() && checkd(i,A.size(),B) != -1 )
        {
            cout<<"V="<<i<<endl;
            int temp = i;
            int maxx = -99999;
            int pos = n;
            
            while(temp > 0)
            {
                int summ = 0;
                int x = temp%10;
                for(int j=0;j<x;j++)
                {
                    summ += A[pos];
                    pos--;
                }

                if(summ > maxx)
                {
                    maxx = summ;
                }
                temp = temp/10;
            }

            if(maxx < minn)
            {
                minn = maxx;
            }
        }
    }

    return minn;
}
int main()
{
    vector<int> A = {12, 34, 67, 90};
    cout<<books(A,2)<<endl;
}