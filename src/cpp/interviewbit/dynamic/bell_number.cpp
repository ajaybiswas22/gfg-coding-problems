#include<bits/stdc++.h>
using namespace std;

void bell_number(int n)
{
    vector<vector<int> > triangle(n);
    int bell_no = 1;

    for(int i=0;i<n;i++)
    {
        vector<int> temp(i+1,0);
        for(int j=0;j<=i;j++)
        {
            if(j == 0)
            {
                temp[j] = bell_no;
            }
            else
            {
                temp[j] = triangle[i-1][j-1] + temp[j-1];
            }
        }
        bell_no = temp.back();
        triangle[i] = temp;
    }
    cout<<bell_no;

}
int main()
{
    bell_number(4);

}