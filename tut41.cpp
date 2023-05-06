#include<iostream>
using namespace std;

class Base1
{
    protected:
    int baseint1;
    public:
    void setbaseint1(int a)
    {
          baseint1=a;
    }
};

class Base2
{
    protected:
    int baseint2;
    public:
    void setbaseint2(int b)
    {
        baseint2=b;
    }
};

class derived : public Base1,public Base2
{
    public:
    void show()
    {
        cout<<" The value of Base1 = ! "<<baseint1<<endl<<endl;
        cout<<" The value of Base2 = ! "<<baseint2<<endl<<endl;
        cout<<" THe sum of BOTH bases is : "<<baseint1+baseint2<<endl<<endl;

    }
};
int main()
{

int a,b;
cout<<endl<<" Enter Number "<<endl;
cin>>a>>b;
cout<<endl;
  derived pankaj;
  pankaj.setbaseint1(a);
  pankaj.setbaseint2(b);
  pankaj.show();






















    return 0;
}