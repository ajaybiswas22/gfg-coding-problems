#include<iostream>
using namespace std;
class A
{
    private:
    int x;

    friend void print(A obj)
    {
        cout<<obj.x;
    }
    public:
    A()
    {
        x = 4;
    }
};

int main()
{
    A obj;
    print(obj);

}