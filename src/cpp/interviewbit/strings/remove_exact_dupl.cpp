#include<bits/stdc++.h>
using namespace std;

void r_exact_duplicate(vector<char> s, int n)
{
    int count = 0;
    char temp;

    s.push_back(',');

    temp = s[0];
    for(int i=0;i<s.size();i++)
    {
        if(temp == s[i])
        {
            count++;
        }
        else if(temp!=s[i] && count == n)
        {
            for(int j=i-1; j>= i-n; j--)
            {
                s[j] = ',';
            }
            count = 1;
        }
        else
        {
            count = 1;
        }

        temp = s[i];
    }

    for(int i=0;i<s.size();i++)
    {
        if(s[i] != ',')
        {
            cout<<s[i];
        }
    }

}
int main()
{
    string str = "aabbbccccdd";
    int n = 3;
    vector<char> s(str.begin(),str.end());
    r_exact_duplicate(s,n);

}