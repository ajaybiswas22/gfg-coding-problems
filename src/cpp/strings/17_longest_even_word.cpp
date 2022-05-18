#include<bits/stdc++.h>
using namespace std;

string longestEvenWord(string str)
{
    int n = str.length();

    if(n == 0)
    {
        string ss;
        return ss;
    }
    
    int i = 0,clength = 0;
    int maxlength = 0;
    int start = -1;

    while (i < n)
    {
        if (str[i] == ' ')
        {
            if (clength % 2 == 0)
            {
                if (maxlength < clength)
                {
                    maxlength = clength;
                    start = i - clength;
                }
            }
            clength = 0;
        }
        else
            clength++;

        i++;
    }

    if (clength % 2 == 0)
    {
        if (maxlength < clength)
        {
            maxlength = clength;
            start = i - clength;
        }
    }

    string output = str.substr(start, maxlength);
    return output;
}
int main()
{
    string str = "this is a test string";

    cout << longestEvenWord(str);
}