#include<bits/stdc++.h>
using namespace std;
// Longest common prefix 
string prefix(vector<string> &A)
{
    int n = A.size();
    int m = A[0].length();
    char temp;
    int i=0,j=0;
    int flag = 0;
    vector<char> v;

    // find the shortest string
    for(int k=0;k<n;k++)
    {
        if(A[k].length() < m)
            m = A[k].length();
    }

    // as soon as common character is not matched, stop the loop 
    for(i=0; i<m;i++)
    {
        j = 0;
        temp = A[j][i];
        for(j=1;j<n;j++)
        {
            if(A[j][i] != temp)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            // insert common character
            v.push_back(temp);
        }
        else
        {
            break;
        }
    }
    
    vector<char> vv;
    for(int k=0;k<v.size();k++)
    {
        vv.push_back(v[k]);
    }
    string ss(vv.begin(),vv.end());
    return ss;
}

int main()
{
    vector<string> A = {"aaa", "aa", "a"};
    cout<<prefix(A);

}