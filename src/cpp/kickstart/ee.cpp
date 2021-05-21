#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int x;
    long int m,n;
    cin>>x;
    long int p=0;
    
    while(p<x)
    {
        cin>>m;
        cin>>n;
        
        vector<long int> v(m,0);
        for(long int i=0;i<m;i++)
        {
            long int temp;
            cin>>temp;
            v[i] = temp;
        }
        
        long long int sum = 0;
        long int k=1;
        
        sort(v.begin(),v.end());

        sum = v[0];
        while(sum <= n && k <= m)
        {
            sum += v[k];
            k++;
        }
        cout<<"Case #"<<p+1<<": "<<k-1<<"\n";
        p++;
    }
    return 0;
}