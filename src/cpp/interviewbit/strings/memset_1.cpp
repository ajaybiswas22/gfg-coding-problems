
// CPP program to illustrate memset
#include <cstring>
#include <iostream>
 
using namespace std;
 
int main()
{
    char str[] = "geeksforgeeks";
    memset(str, 65, sizeof(str));
    cout << str;
    return 0;
}