#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s1="geeksforgeeks";
    string s2="r";

    vector<char> v1(s1.begin(),s1.end());
    vector<char> v2(s2.begin(),s2.end());
    int flag=0;

    for(int i=0; i<v1.size(); i++)
    {
        int temp=i,j;
        for(j=0; j<v2.size(); j++,temp++)
        {
            if(v1[temp]!=v2[j])
            {
                j=0;
                break;
            }
            
        }
        
        if(j==v2.size())
        {
            cout<<i<<"\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
}