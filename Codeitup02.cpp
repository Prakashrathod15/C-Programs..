#include<iostream>
using namespace std;

class A         // First Base class  
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<" Enter number "<<endl;
        cin>>a;
    }
    void print()
    {
        cout<<" hey pankaj , How are you bro "<<endl;
    }

};
class B       // Second Base Class 
{
   protected:
   int b;
   public:
   void getdata()
   {
       cout<<" Enter number for B : "<<endl;
       cin>>b;
   }

};

class c : public A, public B
{
   public:
   void addition()
   {
       cout<<" Addition : "<<a+b;
   }
};
// the above mentioned phenomenon is known as MULTIPLE Inheritance , but what is multiple inheritance ?
// when there are more than one base class being inherited by a single derived class then it is called concept of MULTIPLE INHERITANCE
int main()
{
   c aa;
   aa.input();
   aa.getdata();
   aa.addition();

  class A bb;

  bb.input();
  bb.print();












    return 0;
}