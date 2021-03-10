#include<bits/stdc++.h>
using namespace std;


void diamond(int rows)
{
    int n = rows;

    //upper triangle
    for(int i=0;i<n;i++)
    {
        // left spaces
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        // stars
        for(int j=0;j<i*2 - 1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // lower triangle
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(int j=n*2-1;j>i*2;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(void)
{
    // diamond
    diamond(5);
}