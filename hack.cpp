#include<iostream>
using namespace std;

class Base
{
    public:
    int a;
    Base(int *b)
    {
        a=*b;
    }
    void print()
    {
        cout<<a;
    }
};

int main()
{
    int b=7;
    Base bae(&b);
    bae.print();



    return 0;
}