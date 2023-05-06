#include<iostream>
using namespace std;
class y;


class x
{
    int data;
    public:
    void setvalue(int value )
    {
          data = value;
    }
    friend void add(x,y);
};
class y
{
    int num;
    public:
    void setvalue(int value )
    {
        num = value;
    }

   friend void add(x,y);
};

void add(x o1,y o2)
{
    cout<<" summing details of x and y object given me "<<o1.data + o2.num;
}

int main()
{

    int s,t;
    cout<<" enter two value "<<endl;
    cin>>s>>t;
   x a;

   a.setvalue(s);

   y b;
   b.setvalue(t);
   add(a,b);














    return 0;
}