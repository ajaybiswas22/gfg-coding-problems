#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> hello;

    for(int i=15;i<100;i++)
        hello[i] = i+1;

    auto k = hello.begin();
    cout<<k->first;
}