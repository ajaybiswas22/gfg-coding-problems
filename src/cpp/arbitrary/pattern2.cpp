#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ABCD

    int n = 10;
    int cnt = 0;
    for(int i=0;i<n && cnt < n;i++)
    {
        for(int j=0;j<i && cnt < n;j++) {
            printf("%c",cnt+65);
            cnt++;
        }
        cout<<endl;
    }
    

}