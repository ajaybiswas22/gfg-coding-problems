#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > solve(int A) {
    
    vector<vector<int>> x;
    
    for(int i = 1; i<=A; i++)
    {
        vector<int> temp;
        
        for(int j = 1; j<=i; j++)
        {
            if(i == 1 && j == 1)
                temp.push_back(1);
            else if(j == 1 || j == i)
                temp.push_back(1);
            else
                temp.push_back(x[i-2][j-2] + x[i-2][j-1]);
        }
        x.push_back(temp);
    }
    return x;
}

int main()
{
    int A = 5;
    vector<vector<int>> v = solve(A);

    for(int i =0; i<A; i++)
    {
        vector<int> temp = v[i];
        for(int j=0; j<temp.size(); j++)
        {
            cout<<temp[j];
        }
        cout<<endl;
    }
}