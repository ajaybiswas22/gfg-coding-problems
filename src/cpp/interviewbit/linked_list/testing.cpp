#include<iostream>
#include<stdio.h>
using namespace std;

void abc(int i)
{
    int m = 5;
    m *= i+2;
    printf("%d",m);
}

int main()
{
    int k = 3;
    abc(k);
    abc(k);
    abc(k);
    printf("%d",k);
    return 0;
}