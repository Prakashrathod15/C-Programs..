#include<iostream>
using namespace std;
class y;



class x
{
    public:
    friend class y;
   int add(int a,int b)
   {
       return(a+b);
   }
 int xsum(y o1,y o2);

int ysum(y o1,y o2);


};
 
class y
{
int a,b;
public:
 friend class x;
 void setnumber(int x,int y)
 {
     a=x;
     b=y;
 }
 void printnumber()
 {
     cout<<" the distance between these lines is "<<" x : "<<a<<" y "<<b<<endl;
     
 }


}; 

int x :: xsum(y o1,y o2)
{
  //( x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)
  return(o1.a-o2.a);
}

int x :: ysum(y o1,y o2)
{
    
return(o1.b-o2.b);

}

int main()
{
  int l,m,n,e;

  cout<<" enter four no "<<endl;
  cin>>l>>m>>n>>e;

  y o1,o2;
  o1.setnumber(l,m);
  o2.setnumber(n,e);

  x xa;
  int res = xa.xsum(o1,o2);
  int ok = xa.ysum(o1,o2);
  cout<<endl;
  int resu=res-ok;
  cout<<" the differance of distance of x is : "<<resu;

  xa.xsum(o1,o2);


return 0;
}