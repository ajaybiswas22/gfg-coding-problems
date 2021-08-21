#include<iostream>
using namespace std;

void printA(int n)
{
    for(int i=0;i<n;i++)
    {
        // inverted space triangle
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        // left leg
        if(i==0);
        else
            cout<<"*";

        for(int j=1;j<i*2;j++)
        {  
            if(i == n/2)
                cout<<"*";
            else
                cout<<" ";
        }
        // right leg
        cout<<"*";

        cout<<"\n";
    }
}

int main()
{
    int n = 5;
    printA(n);

}