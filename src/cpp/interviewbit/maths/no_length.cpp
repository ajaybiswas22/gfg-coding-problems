#include<bits/stdc++.h>
using namespace std;

int vecToDigit(vector<int> v)
{
    if(v.size() > 1 && v[0] == 0)
    {
        return -1;
    }
    int count = 0;
    int sum = 0;
    for(int i=v.size()-1;i>=0;i--)
    {
        sum = sum + v[i]*pow(10,count);
        count++;
    }
    return sum;
}


int main() {

    vector<int> v1 = {0,1,5};

    int n = v1.size();
    int nod = 1;
    int up = 2;
    int count = 0;

    if(nod==1)
    {
        for(int i=0;i<n;i++)
        {
            if(v1[i] < up)
            {
                count++;
            }
        }
        
    }
    else
    {
        
        for(int i=0;i<v1.size();i++)
        {
            vector<int> v2;
            v2.push_back(v1[i]);


            for(int j=0;j<v1.size();j++)
            {
                v2.push_back(v1[j]);

                if(vecToDigit(v2) < up && vecToDigit(v2) != -1 )
                {
                    count++;
                }
                v2.pop_back();

            }
        }

    }


}