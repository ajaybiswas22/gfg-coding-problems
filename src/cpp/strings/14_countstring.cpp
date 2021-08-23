#include<bits/stdc++.h>
using namespace std;

string countString(string S, int N)
{
    string str = "";
    str = str + S[0];
    int count = 1;
    for(int i=1;i<N;i++)
    {
        if(S[i]==S[i-1])
        {
    
            while(S[i]==S[i-1])
            {
                i++;
                count++;
                if(i == N)
                {
                    break;
                }
            }
            str = str + to_string(count);
            count = 1;
            i--;
        }
        else
        {
            str = str + S[i];
        }
    }
    return str;
}

int main()
{
    string S = "abcd";
    cout<<countString(S,S.length());

}