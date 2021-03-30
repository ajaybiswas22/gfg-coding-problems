#include<bits/stdc++.h>
using namespace std;

int sqrtCalc(int n)
{
    long int low = 0, high = n;
    long int mid;
    int res = -1;

    while(low <= high)
    {
        mid = low + (high-low)/2;

        if(mid*mid > n)
        {
            high = mid - 1;
        }
        else if(mid*mid < n)
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return res;
}
int main()
{
    cout<<sqrtCalc(65)<<endl;
}