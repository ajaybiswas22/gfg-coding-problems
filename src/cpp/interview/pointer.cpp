#include<iostream>
using namespace std;

void print(const char* message)
{
    cout<<message;
}
int main()
{
    char message[] = "hello";
    int b = 4;
    int c = 5;
    int a;
    a = b+3,c+2;
    cout<<a;
}