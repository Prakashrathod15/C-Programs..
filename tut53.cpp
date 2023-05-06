#include<iostream>
using namespace std;

class A
{
   int a;
   public:
       A & setdata( int a)
       {
          this->a=a;
          
          return *this;
       }
      void getdata()
      {
          cout<<" The value of A is : "<<a<<endl;
      }
      void doublev()
      {
          cout<<" the value of A is : "<<a*a<<endl;
      }
};

int main()
{
    A a;
    a.setdata(5).getdata();
    a.getdata();
    cout<<endl;
    A b;
    b.setdata(7).getdata();
    b.setdata(6).doublev();

// This pointer - the pointer which point the object which call the member function is called as THis pointer ---- this->
// usese of this pointer - 1) when initialising the varible with same name then we can use this pointer
//                         2) when i want the running object return then it is only way 




    return 0;
}