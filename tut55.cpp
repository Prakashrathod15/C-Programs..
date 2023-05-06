#include<iostream>
using namespace std;

class Baseclass
{
    public:
    int base_class_var;
    void display()
    {   
        cout<<" you are in Base class ( Display ) "<<endl;
        cout<<" Displaying the base class variable : "<<base_class_var<<endl;
    }
};

class D : public Baseclass 
{
    public:
    int D_class_var;
      void display()
      {
          cout<<" you are in derieved class ( Display ) "<<endl;
          cout<<" Displaying the base class variable : "<<base_class_var<<endl;
          cout<<" Displaying the D class variable : "<<D_class_var<<endl;
      }

};


int main()
{

// Pointer to derived class 

Baseclass *pointer_base_class;

Baseclass base1;

D d;


pointer_base_class = &d;     // pointing the derived calss object 

pointer_base_class->base_class_var = 5;
pointer_base_class->display();  // where we call display of derieved class but it call the base class display

cout<<endl;

// can i access the derived class variable D_class_var ? -----------> NO

// pointer_base_class->D_class_var = 10;  // it give error 

// pointer_base_class->base_class_var=99;
pointer_base_class->display();

cout<<endl;

D *pointer_D_class;
pointer_D_class =&d;
// pointer_base_class->base_class_var=99;
pointer_D_class->D_class_var=10;
// pointer_base_class->base_class_var=80;
cout<<endl;
// pointer_base_class->display();
pointer_D_class->display();
cout<<" here down "<<endl;
cout<<*pointer_base_class<<endl;

int *sum;
cout<<endl<<endl;
int *p,*q ,*r;
int a=10,b=70;
p = &a , q= &b;

cout<<p<< " adrreess "<<endl;  // adreee 
cout<<*p<<" value "<<endl; // value = 10
cout<<&a<<endl; // adress 
cout<<q<<endl;   // address
cout<<*q<<endl;   // value = 70
cout<<&b<<endl;   // addree

cout<<endl;

cout<<*p+*q<<endl;













    return 0;
}