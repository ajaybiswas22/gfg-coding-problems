#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool leftMatch(string a, string b)
{
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
            return false;
    }
    return true;
}
void suggest(vector<string> dict,string input)
{
    for(int i=0;i<dict.size();i++)
    {
        if(leftMatch(input,dict[i]))
        {
            cout<<dict[i]<<"\n";
        }
    }
}

void didyoumean(vector<string> dict,string input)
{
    int longest_match = 0;
    int lm_index = 0;

    for(int i=0;i<dict.size();i++)
    {
        int no_match = 0;
        for(int j=0;j<input.length();j++)
        {
            if(dict[i][j]==input[j])
            {
                no_match++;
            }
        }
        if(no_match > longest_match)
        {
            longest_match = no_match;
            lm_index = i;
        }
    }
    cout<<"Did you mean: "<<dict[lm_index]<<"\n"; 
}

int main()
{
    vector<string> dict = {"mountain","river","great","rice","mount","grand"};
    string input = "grant";
    //suggest(dict,input);
    didyoumean(dict,input);
}