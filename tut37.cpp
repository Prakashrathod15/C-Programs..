#include<iostream>
using namespace std;

class Base 
{
// this is base class
// when one base class , parent class , superior class being inherited by another derived class , this is know as Single Inheritance
// In this program we Inherite one base class by one derived class by using "public" Visibility modifiers or visibility MODE
int data1;
public:
int data2;
void setdata();
int getdata1();
int getdata2();

};
void Base::setdata()
{
   data1=10;
   data2=20;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}

class derived:public Base         // class derived Visibility Mode Base Class name
{
  int data3;
  public:
  void process();
  void display();

};
void derived::process()
{

  data3=getdata1()*data2;

}
void derived::display()
{
    cout<<" Value of DATA one is "<<getdata1()<<endl<<endl;
    cout<<" Value of DATA two is "<<data2<<endl<<endl;
    cout<<" Value of DATA three is "<<data3<<endl;
}

int main()
{
    derived der;
    der.setdata();
    der.getdata2();
    der.process();
    der.display();








    return 0;
}