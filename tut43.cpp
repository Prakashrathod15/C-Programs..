#include<iostream>
using namespace std;

class Base1
{
    int a;
    public:
    void greet()
    {
        cout<<" Hello Good-Morning "<<endl;
    }
};

class Base2
{
    int b;
    public:
    void greet()
    {
        cout<<" Hello Good-Afternoon "<<endl;
    }
};

class Base3
{
    int c;
    public:
    void greet()
    {
        cout<<" Hello Good-Evening "<<endl;
    }
};

class derived : public Base1,public Base2,public Base3
{
   int d;
   public:
   void greet()
   {
       Base1::greet();
       Base2::greet();
   }
};

int main()
{   

    cout<<endl<<endl;
    derived der;
    der.greet();
    cout<<endl<<endl;

    Base3 b3;
    b3.greet();

    cout<<endl<<endl;
    der.greet();











    return 0;
}