#include<iostream>
using namespace std;

int main()
{
  int a=10;
  int *ptr;

  ptr=&a;

  cout<<" the value of a is : "<<(*ptr)<<endl;
  cout<<endl<<" now *ptr = *ptr+a operation take place "<<endl;
  *ptr=*ptr+a;
  cout<<" The revised value of a is : "<<a<<endl;
  cout<<" the revised value of *ptr is : "<<*ptr<<endl;












    return 0;
}