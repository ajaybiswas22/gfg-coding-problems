#include<bits/stdc++.h>
using namespace std;

// Return the string A after reversing the string word by word

string solve(string A) {
    
    int n = A.length();
    vector<vector<char>> V;
    
    int j = 0;
    char prev = ' ';
    vector<char> temp;
    
    for(int i=0;i<n;i++)
    {
        if( (A[i] == ' ' && prev != ' ') || (i == n-1 && A[i] != ' ') )
        {
            if(A[i]!= ' ')
                temp.push_back(A[i]);
            
            V.push_back(temp);
            j++;
            prev = A[i];
            temp.clear();
        }
        else if(A[i] == ' ' && prev == ' ')
        {
            prev = A[i];
            continue;
        }
        else
        {
            temp.push_back(A[i]);
            prev = A[i];
        }
        
    }
    
    //cout<<"V :"<<V.size();
    
    vector<char> W;
    
    for(int i=V.size()-1; i>=0; i--)
    {
        int m = V[i].size();
        
        for(int j=0;j<m;j++)
        {
            W.push_back(V[i][j]);
        }
        W.push_back(' ');
    }
    W.pop_back();
    
    string str(W.begin(),W.end());
    return str;
}

int main()
{
    string A = "hello guys";
    cout<<solve(A)<<endl;
}
