#include<bits/stdc++.h>
using namespace std;

// 1, 11, 21, 1211, 111221, ...
string generate(string p)
{
    int i = 0;
    vector<char> v;
    char temp;

    while(i<p.length())
    {
        temp = p[i];
        int ind = 0;
        int count = 0;
        while(temp==p[i])
        {
            count = count + 1;
            i++;
        }

        v.push_back(count + '0');
        v.push_back(temp);
        temp = p[i];
    }

    string str(v.begin(),v.end());
    return str;
}

string count_and_say(int A)
{
    string p = "1";

    for(int i=2;i<=A;i++)
    {
        p = generate(p);
    }
    return p;
}

int main()
{
    int n = 4;
    cout<<count_and_say(n);
}