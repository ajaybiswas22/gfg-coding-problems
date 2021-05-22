#include<bits/stdc++.h>
#define long int li
#define long long int lli
using namespace std;


    
li choose(vector<vector<li>> &A,li P)
{
    int m = A.size();
    int n = A[0].size();



}


int main()
{

    li P;
    li T,line=0;

    while(line<T)
    {
        li N,K,P;
        cin>>N>>K>>P;

        vector<vector<li>> stplates(N,vector<li> (K,0));

        for(int i=0;i<N;i++)
        {
            for(int j=0;j<K;j++)
            {
                li temp;
                cin>>temp;
                stplates[i][j] = temp;
            }
        }

        cout<<choose(stplates,P)<<endl;

        line++;
    }


}