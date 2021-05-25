#include<bits/stdc++.h>
using namespace std;

long long gen(long int inp)
{

    long long int sum = 0;
    long long cnt = 0;
    int flag = 0;

    for(long i=1;i<=inp;i++)
    {
        for(int j=i;;j++)
        {
            if(sum == inp)
            {
                flag = 1;
                break;
            }
            else if(sum > inp)
            {
                break;
            }
            else
            {
                sum = sum + j;
            }
        }
        if(flag == 1)
        {
            cnt++;
        }
        
        cout<<"SUM "<<sum<<"\n";
        flag = 0;
        sum = 0;
    }
    return cnt;
}

int main()
{
    long int T,P=0;
    cin>>T;

    while(P<T)
    {
        long inp;
        cin>>inp;

        cout<<"Case #"<<P+1<<": "<<gen(inp)<<"\n";

        P++;
    }

}