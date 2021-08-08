/*
Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].
*/

// you can use includes, for example:
 #include <bits/stdc++.h>
 using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    sort(A.begin(),A.end());
    unsigned int n = A.size();
    int no = 1;

    for(unsigned int i=0;i<n;i++)
    {
        if(A[i] > no)
        {
            return no;
        }
        else if(A[i] == no)
        {
            no++;
        }
        else if(A[i] == no - 1)
        {
            continue;
        }
    }
    return no;
}

int main()
{
    vector<int> A = {1,2,3,5};

    cout<<solution(A);
}