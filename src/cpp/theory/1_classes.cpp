#include<iostream>
using namespace std;

class A {

    private:
    int x = 5;

    friend bool operator==(A obj,A obj2);

};

bool operator==(A obj, A obj2)
{
    return obj.x == obj2.x;
}


int main()
{
    A obj;
    A obj2;
    cout<<(obj==obj2);
}



