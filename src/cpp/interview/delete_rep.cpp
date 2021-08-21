#include<iostream>
#include<string>
#include<vector>
using namespace std;
// delete common substring until no further deletion possible
// return no. of possible strings after deletion
// incomplete

int eraseAllSubStr(std::string & mainStr, const std::string & toErase)
{
    size_t pos = std::string::npos;
    // Search for the substring in string in a loop untill nothing is found
    while ((pos  = mainStr.find(toErase) )!= std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
    if(pos == std::string::npos)
        return 1;
    else
        return 0;
}

string makeString(string S, int low, int high)
{
    vector<char> temp;

    for(int i=low;i<=high;i++)
    {
        temp.push_back(S[i]);
    }
    
    string str(temp.begin(),temp.end());
    return str;
}

long long partition(string S,int low,int high)
{
    static long long int count = 0;

    if(low >= high)
        return count;
    
    // all substrings
    for(int i=0;i<S.length();i++)
    {
        for(int j=i;j<S.length();j++)
        {
            // toErase
            string T = makeString(S,i,j);
            string M = S;
            int flag = 0;
            while(flag == 0)
            {
                flag = eraseAllSubStr(M,T);
                count += flag;
                string res = T+M;
                partition(res,0,res.length()-1);
            }
        }
    }
    return count;
}

long long substringDeletion(string str)
{
    vector<char> S(str.begin(),str.end());
    int N = str.length();
    return partition(str,0,N-1)%1000000007;
}

int main()
{
    string str = "ababc";
    cout<<substringDeletion(str);
}