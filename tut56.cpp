#include<iostream>
using namespace std;


class Base
{
    public:
    int base_var1;
      void display()
      {
          cout<<" Welcome in Base "<<endl;
          cout<<" dispalying the Base variable value : "<<base_var1<<endl;
      }

};

class D : public Base
{
    public:
    int D_var;
     virtual void display()
      {
          cout<<" Welcome in Derived class "<<endl;
          cout<<" dispalying the derived variable value : "<<D_var<<endl;
          cout<<" dispalying the Base class value : "<<base_var1<<endl;
      }

};

int main()
{
  Base *base_pointer;
  Base base_obj;
  D d;
  D *d_pointer;
  d_pointer=&d;
  base_pointer = &d;

  base_pointer->base_var1=80;
  d_pointer->D_var = 40;
 // base_pointer->display();

  d_pointer->display();

  d_pointer->D_var=20;
  d_pointer->display();












    return 0;
}