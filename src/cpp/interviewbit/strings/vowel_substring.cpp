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
    int count = 0;
    
    for(int i=0;i<n;i++)
    {
        if(isVowel(A[i]))
        {
           for(int j=i+1;j<n;j++)
           {
               if(!isVowel(A[j]))
               {
                   count++;
               }
           }
        }
        else
        {
            for(int j=i+1;j<n;j++)
           {
               if(isVowel(A[j]))
               {
                   count++;
               }
           }
        }
        
    }
    return count;
}

int main()
{
    string A = "hello";
    cout<<solve(A);

}
