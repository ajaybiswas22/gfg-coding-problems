#include<bits/stdc++.h>
using namespace std;

int max_sum(vector<int> A)
{
    int negative = 0,positive = 0,maximum = 0;
    int sum = 0, temp = 0;
    vector<int> arr;

    for(int i=0;i<A.size();i++)
    {
        temp = A[i];

        if(temp < 0)
        {
            negative += temp;
        }
        else
        {
            positive += temp;
        }

        if(abs(negative) <= positive)
        {
            arr.push_back(A[i]);
            sum = sum + A[i];
        }
        else
        {
            positive = 0;
            sum = 0;
            negative = 0;
        }

        if(maximum <= sum)
        {
            maximum = sum;
        }

        if(positive == 0 && negative < 0)
        {
            negative = 0;
        }

    }

    return maximum;
}

int main()
{

    vector<int> A {8,-3,7,8,-1};
    cout<<max_sum(A)<<"\n";

}