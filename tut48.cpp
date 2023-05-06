#include<iostream>
using namespace std;
// ----------------------- constructors in derived class Rule -----------------------
// 1. if constructor is in Derived class and derived class onject created then first Base class Constructor is run then after derived
//    class constructor is runn
// 2. if more than one inheritance take place or more than one base classes is there - class derived : public A, public B
//    in such case first A constructor is called then class B and at last derived class constructor is called.
// 3. one special case is that when virtual class is inherited by derived class then derivative claass get more priority as compared to 
//    Base class e.g class derived : viartual public A,public B
//    the program can be executed in such way -- constructor is called all from base class to derived class then function called 
//    from Base to derived 


class Base1
{
int data1;
public:
  Base1(int i )
  {
      data1=i;
      cout<<" Base1 class  constructor  is called "<<endl;
  }
 void print1()
 {
     cout<<" the value of Data1 is : "<<data1<<endl;
 }


};

class Base2
{
    int data2;
    public:
     Base2(int p)
     {
         data2=p;
         cout<<" class Base2 constructor is called "<<endl;
     }
     void print2()
     {
         cout<<" the value of Data2 is : "<<data2<<endl;
     }

};

class derivative : public Base1,public Base2
{
    int derivative1,derivative2;
    public:
    derivative(int a,int b,int c,int d):Base1(a),Base2(b)
  {
    derivative1=c;
    derivative2=d;
    cout<<" the derivate class constructor is called "<<endl;
   }
void print3()
{
    cout<<" the value of derivative1 is : "<<derivative1<<endl;
    cout<<" the value of derivative2 is : "<<derivative2<<endl;
}

};
int main()
{
    cout<<endl;
  int a,b,c,d;
  cout<<" ENter four number for constructors : "<<endl;
  cin>>a>>b>>c>>d;
cout<<endl;
 cout<<" -------------------------------------------> Constructor in derived Class <-------------------------------------------------"<<endl;
  derivative der(2,4,6,8);

  der.print1();
  cout<<endl;
  der.print2();
  cout<<endl;
  der.print3();
  cout<<endl;











    return 0;
}