// program to find longest repeating subsequence in a string

#include<bits/stdc++.h>
using namespace std;

string longest_subsequence(string s)
{
    int longest = 0;
    string lstr;
    vector<string> vstr;
    int n = s.length();
   
   // generate subsequences
   for(int i=0;i<=n;i++)
    for(int j=i+1;j<=n;j++)
    {
        vector<char> v(s.begin()+i,s.begin()+j); 
        string str(v.begin(), v.end());
        //cout<<str<<",";

        // if str repeats
        if (find(vstr.begin(), vstr.end(),str) != vstr.end())
        {
            // check longest
            if(str.length() > longest)
            {
                longest = str.length();
                lstr = str;
            }
        }
        
        // push the substring
        vstr.push_back(str);
            
    }

    return lstr;
}

int main(void)
{
    cout<<longest_subsequence("axxxy")<<endl;
    system("PAUSE");
}