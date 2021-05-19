#include<bits/stdc++.h>
using namespace std;
void prefix(vector<string> &A)
{
    int n = A.size();
    int m = A[0].length();
    char temp;
    int i=0,j=0;
    int flag = 0;
    vector<char> v;

    for(int k=0;k<n;k++)
    {
        if(A[k].length() < m)
            m = A[k].length();
    }

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
            v.push_back(temp);
        }
        else
        {
            break;
        }
    }
    
    for(int k=0;k<v.size();k++)
    {
        cout<<v[k];
    }
}

int main()
{
    vector<string> A = {"aaa", "aa", "a"};
    prefix(A);

}