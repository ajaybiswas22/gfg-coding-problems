#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string A) {
    
    vector<int> str(A.begin(),A.end());
    int val = 0;
    int n = str.size();
    int cnt = 0;
    for(int i=n-1; i>=0; i--)
    {
        // str[i] - 64 = 1 for A
        val = val + pow(26,cnt)*(str[i] - 64); 
        cnt++;
    }
    
    return val;
}

int main()
{

    string a = "ABBA";
    cout<<titleToNumber(a)<<endl;
}
