#include<bits/stdc++.h>
using namespace std;

int maxSubArray(const vector<int> &A) {
 
    int meh=0;
    int msf= -9999;
    for(int i=0;i<A.size();i++){
        meh=meh+A[i];
        if(meh<A[i]){
            meh=A[i];
        }
        if(msf<meh){
            msf=meh;
        }
    }
    return msf;
}

int main()
{
    vector<int> x = {1,2,3,4,5};
    cout<<maxSubArray(x);
}