#include<iostream>
#include<string>
using namespace std;

int count=0;

class demo
{
 public:
 demo()
 {
   count++;
   cout<<" number of object created : "<<count<<endl;
 }

~demo()
{
    count--;
    cout<<" the of object "<<count<<endl;
}





};

int main()
{   
   demo d1,d2,d3;
   {

    demo d4;

   }


    return 0;
}