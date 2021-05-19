#include<bits/stdc++.h>
using namespace std;

void longest(vector<char> &v)
{
    int vowel = 0;
    char temp = v[0];
    vector<char> sequence;
    vector<char> temp_seq;

    v.push_back('z');

    for(int i=0; i<v.size();i++)
    {
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'o' || v[i] == 'u')
        {
            if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' || vowel == 0)
            {
                //vowel++;
                temp_seq.push_back(v[i]);
            }
            else
            {
                if(temp_seq.size() > sequence.size())
                {
                    sequence = temp_seq;
                }
                temp_seq.clear();
            }
        }
        else
        {
            if(temp_seq.size() > sequence.size())
            {
                sequence = temp_seq;
            }
                temp_seq.clear();
        }
        temp = v[i];
    }
    for(int i=0;i<sequence.size();i++)
    {
        cout<<sequence[i];
    }
}

int main()
{
    string str = "heealoeooi";
    vector<char> s(str.begin(),str.end());
    longest(s);
}

