#include<bits/stdc++.h>
using namespace std;

long long int cnt = 0;

long palindrome(string S)
{
    for(long i=0,j=S.length()-1;i<j;i++,j--)
    {
        if(S[i]!=S[j])
        {
            return 0;
        }
    }
    return 1;
}

void printAllKLengthRec(string set, string S, string prefix,
                                    long n, long k)
{
     
    if (k == 0 && palindrome(prefix) && prefix < S)
    {
       // cout<<"IF "<<prefix<<endl;
        cnt++;
        return;
    }
    else if(k == 0)
    {
       // cout<<"EL "<<prefix<<endl;
        return;
    }

    for (long i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix = prefix + set[i];
        if(!palindrome(newPrefix))
            break;
        printAllKLengthRec(set, S, newPrefix, n, k - 1);
    }
 
}
 
void printAllKLength(string set, string S, long k,long n)
{
    printAllKLengthRec(set,S,"", n, k);
}

long generate(long N,long K,string S)
{
    vector<char> V;
    const unsigned int M = 1000000007;

    for(long i=0;i<K;i++)
    {
        V.push_back('a' + i);
    }
    string str(V.begin(),V.end());
    //cout<<str;

    printAllKLength(str,S, N, K);

    return cnt % M;
             
}

int main()
{
    long int x;
    long loop = 0;
    cin>>x;
    while(loop<x)
    {
        long N,K;
        string S;
        long count = 0;
        
        cin>>N;
        cin>>K;
        cin>>S;

        count = generate(N,K,S);

        cout<<"Case #"<<loop+1<<": "<<count<<"\n";

        cnt = 0;

        loop++;
    }

}