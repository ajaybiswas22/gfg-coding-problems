#include<bits/stdc++.h>
using namespace std;
// not correct
vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    vector<int> x;

    int t = 0,b = 0,l = 0,r = 0;
    int m = A.size()-1;
    int n = A[0].size()-1;
    
    if(A.size() * A[0].size() == 1)
    {
        x.push_back(A[0][0]);
        return x;
    }
    
    while(1) {
    while(l <= n - r)
    {
        if(x.size() >= A.size()*A[0].size())
            return x;
            
        x.push_back(A[t][l]);
        l++;
    }
    l--;
    t++;
    
    while(t <= m - b)
    {
        if(x.size() >= A.size()*A[0].size())
            return x;
            
        x.push_back(A[t][l]);
        t++;
    }
    t--;
    l--;
    
    while(l >= 0 + r)
    {
        if(x.size() >= A.size()*A[0].size())
            return x;
            
        x.push_back(A[t][l]);
        l--;
    }
    l++;
    t--;
    
    while(t >= 0 + b)
    {
        if(x.size() >= A.size()*A[0].size())
            return x;
            
        x.push_back(A[t][l]);
        t--;
    }
    x.pop_back();
    
    b++;
    r++;
    
    t = b;
    l = r;
    
    }
    return x;
    
}

int main()
{
    vector<vector<int> > x = {{1,2,3},{4,5,6},{7,8,9}};
    
}
