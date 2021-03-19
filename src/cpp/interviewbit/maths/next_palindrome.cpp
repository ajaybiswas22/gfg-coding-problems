#include<bits/stdc++.h>
using namespace std;

// converts a vector to palindrome by copying left side 
// to the right side
void toPalindrome(vector<char> &A)
{
    vector<char>::iterator it1 = A.begin();
    vector<char>::iterator it2 = A.end()-1;

    while(it1 < it2)
    {
        *it2 = *it1;
        it1++;
        it2--;
    }
}

// adds one to a particular position of the vector without carry
void addOne(vector<char> &A, int pos)
{
    if(A[pos] == '9')
        A[pos] = '0';
    else
        A[pos] = A[pos] + 1;
}

// check whether v2 is greater than v1
int check(vector<char> &v2, vector<char> &v1)
{
    string s1(v1.begin(),v1.end());
    string s2(v2.begin(),v2.end());

    return s2>s1;
}

string solve(string str) {
    
    // single digit
    if(str.length()<2 && str != "9")
    {
        str[0] = str[0] + 1;
        return str;
    }
    else if(str == "9")
    {
        return "11";
    }
    
    // each time we will add one to the ptr location
    // and make it palindrome
    // then check whether it is next palindrome
    
    vector<char> v1(str.begin(),str.end());
    vector<char> v2=v1;

    int ptr=v2.size()-2;

    toPalindrome(v2);

    while(check(v2,v1 )==0)
    {
       // overflow digit
       if(v2[0]=='9' && ptr==0)
       {
           v2[0]='0';
           v2.insert(v2.begin(),'1');
           v2.back()='1';
           break;
       }
       else
       {
        addOne(v2,ptr);
        toPalindrome(v2);
        ptr--;
       }
    }
      
    string ret(v2.begin(),v2.end());    
    return ret;
}

int main()
{
    string str = "999";
    cout<<solve(str)<<endl;
}
