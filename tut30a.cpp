#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
complex(int ,int );
complex(int);
void printnumber()
{

cout<<" the number is : "<<a<<" and "<<b<<" i "<<endl;

}

};
complex :: complex(int x,int y)
{
    a=x;
    b=y;
}
complex :: complex(int x)
{
  a=x;
}
int main()
{
  int p,q,s,r;
  cout<<" enter four numbers "<<endl;
  cin>>p>>q>>s>>r;
  // implicit call
  complex a(p,q);
  // explicit call
  complex b=complex(s,r);
  a.printnumber();
  b.printnumber();

  complex c2(p);
  c2.printnumber();

    return 0;
}