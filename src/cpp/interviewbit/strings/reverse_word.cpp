#include<bits/stdc++.h>
using namespace std;

string solve(string A)
{
    int n = A.length();
    vector<string> V;
    int j=0;
    //char prev = ' ';

    string temp;
    for(int i=0;i<n;i++)
    {
        if( (A[i] == ' ') || (i == n-1) )
        {
            if(A[i]!= ' ')
            {
                temp.push_back(A[i]);
            }
            V.push_back(temp);
            j++;
            temp.clear();
        }
        else
        {
            temp.push_back(A[i]);
        }
    }

    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<"\n";
    }

}

int main()
{
    string s = " Hi Hello";
    cout<<solve(s)<<endl;
}