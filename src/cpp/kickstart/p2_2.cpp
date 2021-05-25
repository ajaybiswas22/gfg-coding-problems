#include<bits/stdc++.h>
using namespace std;

long long gen(long int inp)
{

    long long int sum = 0;
    long long cnt = 0;
    long long count = 0;
    int flag = 0;


    for(int j=1;;j++)
    {
        if(sum < inp)
        {
            sum+=j;
            count++;
        }
        else if(sum == inp)
        {
            sum+=j;
            cnt++;
        }
        else
        {
            break;
        }
        
    }

    for(long i=1;i<inp;i++)
    {
        sum = ((count+i)*(count+i+1))/2;
        long int back;
        back = i*(i+1)/2;
        sum = sum - back;
        cout<<sum<<"\n";
        if(sum == inp)
        {
            cnt++;
        }
        else
        {
            sum = sum - (i+1)*(i+2)/2;
        }
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