#include<bits/stdc++.h>
using namespace std;

int editDistance(string S1, string S2, int M, int N)
{
    if(M == 0)
    {
        return N;
    }
    if(N == 0)
    {
        return M;
    }

    if(S1[M-1] == S2[N-1])
    {
        return editDistance(S1,S2,M-1,N-1);
    }

    return 1 + std::min({
                        editDistance(S1,S2,M-1,N),
                        editDistance(S1,S2,M,N-1),
                        editDistance(S1,S2,M-1,N-1)
                        }
                        );
}

int main()
{
    string S1 = "";
    string S2 = "";
    int M = S1.length();
    int N = S2.length();
    cout<<editDistance(S1,S2,M,N);
}
