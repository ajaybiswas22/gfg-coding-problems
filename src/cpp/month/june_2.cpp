#include<bits/stdc++.h>
using namespace std;

bool isVowel(char s)
{
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||
       s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
       {
           return true;
       }
       else
       {
           return false;
       }
}

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

int amazing(vector<char> v,int low, int high)
{
    if(low > high)
    {
        return 0;
    }

    if(isVowel(v[low]))
    {
        return high-low+1 + amazing(v,low+1,high);
    }
    else
    {
        return 0 + amazing(v,low+1,high);
    }
    
}

int main()
{
    string str = "ABEC";
    vector<char> v(str.begin(),str.end());
    cout<<amazing(v,0,v.size()-1);
}