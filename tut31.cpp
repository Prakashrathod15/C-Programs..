#include<iostream>
using namespace std;
 class complex
 {
     int a,b;
     public:
     complex(int x ,int y)
     {
          a=x;
          b=y;
     }
     complex(int x)
     {
         a=x;
         b=1;
     }
     void printnum()
     {
         cout<<" the number is "<<a<<"  "<<b<<endl;
     }
 };

 int main()
 {
     int r,s;
     cout<<" enter two value "<<endl;
     cin>>r>>s;
    complex c1(r,s);
    c1.printnum();
    
     complex c2(s);
     c2.printnum();















     return 0;
 }