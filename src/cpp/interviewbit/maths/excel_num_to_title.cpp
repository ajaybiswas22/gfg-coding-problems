#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int n) {
    
    // A = 65
    // 1 - 65
    vector<char> s;
    
    int length;
    int count = 0;
    
    for(;;)
    {
        if(n <= pow(26,count+1) && n >= pow(26,count))
        {
            length = count+1;
            break;
        }
        count++;
    }
    
    for(int i=length; i>=1;i--)
    {
        s.push_back( (int)(n/pow(26,i-1)) +'A' - 1 );
        n = n - pow(26,i-1)*(int)(n/pow(26,i-1));
    }
    
    string str(s.begin(),s.end());
    return str;
}

int main()
{
    int n = 53;

    cout<<convertToTitle(n)<<endl;
}
