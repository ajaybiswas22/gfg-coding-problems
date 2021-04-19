#include<bits/stdc++.h>
using namespace std;

int computeGCD(int x,int y)
{
    int temp;
    while(y!= 0)
    {
        temp = y;
        y = x%y;
        x = temp;
        cout<<"RUN"<<endl;
    }
    return x;
}
int main()
{
    cout<<computeGCD(2,9)<<endl;
}