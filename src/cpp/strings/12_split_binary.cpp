/* Given a binary string str of length N, the task is to find the
 * maximum count of substrings str can be divided into such that all 
 * the substrings are balanced i.e. they have equal number of 0s and 1s. 
 * If it is not possible to split str satisfying the conditions then print -1.
 * 
 * Time Complexity O(n), Space Complexity O(1). 
 */

#include <bits/stdc++.h> 
using namespace std; 

int maxSplit(string str)
{
    //0011001010

    int n = str.length();

    int zeros = 0, ones = 0;
    int count = -1;

    for(int i=0;i<n;i++)
    {
        if(str[i] == '0')
            zeros++;
        else if(str[i] == '1')
            ones++;
        else
            return -1;

        // increment count if no. of 0s and 1s are equal
        if(zeros == ones)
        {
            count++;
            zeros = 0;  // reset
            ones = 0;   // reset
        }
    }

    if(count == -1)
        return count;
    else
        return count + 1;   // started counting from -1.
}

int main(void)
{
    cout<<maxSplit("0111100010")<<endl;
    system("PAUSE");
    return 0;
}