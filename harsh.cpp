#include<iostream>
using namespace std;
class calculator 
{
   int a,b;
   public:
  void setnumber(int x,int y)
   {
       a=x;
       b=y;
   }
   void add(calculator o1,calculator o2)
  {
      cout<<" o1.a : "<<o1.a<<" o2.a "<<o2.a<<endl;
      cout<<endl;
      cout<<" o1.b : "<<o1.b<<" o2 "<<o2.b<<endl;

  }


};
int main()
{


int l,m,n,d;
cout<<" enter four value "<<endl;
cin>>l>>m>>n>>d;

cout<<" by you "<<endl;
cout<<" o1 - a & b "<<l<<" "<<m<<endl;
cout<<" o2 - a & b "<<n<<" "<<d<<endl;

cout<<endl<<endl;

calculator o1,o2;

o1.setnumber(l,m);
o2.setnumber(n,d);

cout<<endl<<endl;
o1.add(o1,o2);
o2.add(o1,o2);
















    return 0;
}
