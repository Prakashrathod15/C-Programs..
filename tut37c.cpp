#include<iostream>
using namespace std;

class Base
{
  int data1;
  protected:
  int data2;
  int data3;
  void process();
   void print();
};
void Base :: process()
{
    data1=10;
    data2=20;
    data3=30;
}
void Base::print()
{
    cout<<" hy this is data 1 : "<<data1<<endl;
    cout<<" hy this is data 2 : "<<data2<<endl;
    cout<<" data 3 : "<<data3<<endl;
}
class derived : protected Base
{
   int data4;
   public:
   void show()
   {
       cout<<" this is show function "<<endl;
       process();
       print();
   }


};

int main()
{

  derived der;
  der.show();














    return 0;
}