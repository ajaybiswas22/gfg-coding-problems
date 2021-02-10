#include<bits/stdc++.h>
using namespace std;

void subsequence(string s)
{
    vector<string> vstr;
    for(int j=1;j<s.length()+1;j++)
        for(int i=0;i<s.length();i++)
        {
            string str =  s.substr(i,j);

            // check for occurance of string in the vector
            if (!(find(vstr.begin(), vstr.end(),str) != vstr.end()))
                vstr.push_back(str);    // push if not present
        }

    for (const string &s: vstr)
        std::cout << s<<",";
    cout<<endl;
}

int main(void)
{
    subsequence("aaa");
    system("PAUSE");
}