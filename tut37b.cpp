#include<iostream>
using namespace std;

class Base
{
  // when one Child class is Inherited by one Base class is know as Single Inheritance
  // In this program we use "PRIVATE" visibility modifier
  int data1;
  public:
  int data2;
  void setdata();
  int getdata1();
  int getdata2();

};
void Base::setdata()
{
    data1=63;
    data2=63;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}

class Derived:private Base
{
  int data3;
  public:
   void process();
  void display();

};
void Derived::process()
{  
    setdata();
    data3=getdata1()*data2;
}
void Derived::display()
{    
    cout<<endl;
    cout<<" THE DATA One is : "<<getdata1()<<endl<<endl;
    cout<<" THE DATA Second is : "<<getdata2()<<endl<<endl;
    cout<<" THE DATA Three is : "<<data3<<endl;
    cout<<endl;
}
int main()
{

Derived der;

der.process();
der.display();














    return 0;
}