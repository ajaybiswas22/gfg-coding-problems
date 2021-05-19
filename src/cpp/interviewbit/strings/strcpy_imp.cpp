#include<stdio.h>
#include<string.h>
using namespace std;

void strncpy_imp(char* s1, char* s2,int n)
{
    int sz = strlen(s2);
    int i;
    for(i=0;i<sz*n;i++)
    {
        s1[i] = s2[i%sz];
    }
    s1[i] = '\0';
}

int main()
{
    int n = 4;
    char str[] = "hello";
    char str2[100];

    strncpy_imp(str2,str,n);
    printf("%s",str2);

    return 0;
}