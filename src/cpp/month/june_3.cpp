/*

Given a string A consisting of lowercase characters.

You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.

Return the count of substring modulo 10^9 + 7.

*/

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char a)
{
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return true;
    else
        return false;
}
int solve(string A) {
    int n = A.length();
    int vowel = 0, cons = 0;
    long int count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(isVowel(A[i]))
        {
            vowel++;
        }
        else
        {
            cons++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        //int rvowel = vowel;
        //int rcons = cons;
        
        if(isVowel(A[i]))
        {
           vowel--;
           count = count + cons;
        }
        else
        {
            cons--;
            count = count + vowel;
        }
        
    }
    return count%1000000007;
}

int main()
{
    string A = "hello";
    cout<<solve(A);

}
