#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int lcs(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    vector<vector<int>> table(m+1,vector<int> (n+1,0));

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                table[i][j] = 0;
            }
            else
            {
                if(s1[i-1] == s2[j-1])
                    table[i][j] = table[i-1][j-1]+1;
                else    
                    table[i][j] = std::max(table[i-1][j],table[i][j-1]);
            }
            
        }
    }
    return table[m][n];
}

int longest_palindromic_subsequence(string s1)
{
    string s2 = s1;
    std::reverse(s2.begin(),s2.end());
    return lcs(s1,s2);
}

int main()
{
    string s1 = "abcddcij";
    cout<<longest_palindromic_subsequence(s1);
    return 0;
}