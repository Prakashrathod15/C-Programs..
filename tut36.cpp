#include<iostream>
using namespace std;

// Base class
class employee 
{  
    public:
    int Id;
    float salary;

    employee(int inpId,float b)
    {
        Id=inpId;
        salary=b;
    }
   employee(){}
   void print()
   {
       cout<<" Hello your in print "<<endl;
   }


};
// derived class 
// derived class name : visibility Modifier base class name
class programmer : public employee
{
   public:
   programmer( int inpId)
   {
       Id=inpId;
   }
  
   int languageCode =9;
   void getdata()
   {
       cout<<Id<<endl;
   }

};
// this is also example of single Inheritance 

int main()
{

// --------------------------------  Inheritance --------------------------------------
// 1) Single Inheritance - the inheritance in which there is a single base class derived one class is know as Single Inheritance or when one base class is being derived by single class is know as single Inheritance
// 2) Multiple Inheritance - when there are more than one base class is being inherited by a single derived class ,then it is called Multiple inheritance
// 3) Multi-Level Inheritance - is a type of Inheritance in which One super -class is derived by child class then this class is further derived by another child class this is know as MULti level inheritance
// 4) Heicharchl Inheritance - when One base class is being derived by multiple child classes is known as Heicharchal Inheritance
// 5) Hybrid Inheritance  - It is combination of two or more above mentined Inheritance
int a;
float b;
cout<<" enter ID no "<<endl;
cin>>a;
cout<<"enter Salary "<<endl;
cin>>b;

employee rathod(a,b);
programmer pro(a);
pro.print();








    return 0;
}