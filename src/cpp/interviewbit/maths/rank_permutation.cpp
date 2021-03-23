#include<bits/stdc++.h>
using namespace std;

long factorial(int n)
{
    long temp = 1;
    while(n > 0)
    {
        temp = temp * n;
        n--;
    }
    return temp;
}

int permute(vector<char> v)
{

    int x = v.size();
    int rank = 0;
    for(int i=0; i<x; i++)
    {
        int count =0;
        int f=factorial(x-i-1);
        for(int j=i+1; j<x; j++)
        {
            if(v[i]>v[j])   // comparing ascii
            {
                count++;
            }
        }
        rank=rank+count*f;
    }
    cout<<rank+1<<'\n';

}


int main()
{
    string s = "acb";
    vector<char> v1(s.begin(),s.end());
    permute(v1);
}