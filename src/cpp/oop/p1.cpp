#include<iostream>
//#include"header.h"
using namespace std;

class A
{
    public:
    virtual void show()=0;
};

class B:public A
{
    public:
    void show(){
        cout<<"Hello";
    }
};
int main()
{
    B ptr2;
    A *ptr = &ptr2;
    ptr->show();
   // ptr->show();
}