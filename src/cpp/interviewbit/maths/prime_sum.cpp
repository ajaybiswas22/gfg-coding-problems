#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    
    vector<int> primes(n+1, 1);
    
    vector<int> B;
        
    primes[0] = 0;
    primes[1] = 0;
    
    for(int i=2; i<=sqrt(n); i++)
    {
        if(primes[i] == 1)
        {
            for(int j=2;(i*j)<=n;j++)
                primes[i*j] = 0;
        }
    }
    
    for(int i=0;i<primes.size();i++)
    {
        if(primes[i] == 1)
        {
            B.push_back(i);
        }
    }
    return B;
}

void printList(vector<int> list)
{
    // range based for loop
    // Refer: https://en.cppreference.com/w/cpp/language/range-for
    for(int val: list)
        cout<<val<<" ";
}

int main()
{

    int n = 10;
    vector<int> a = sieve(n);
    //printList(a);

    int num1, num2;
    int index;
    for(int i=0; i< a.size(); i++)
    {
        num1 = a[i];
        num2 = n - a[i];
        auto it = find(a.begin(),a.end(),num2);
        if (it != a.end()) 
        {
            cout<< num1 << "+" <<num2<<"=" << num1 + num2<<endl;
        }

    }
}