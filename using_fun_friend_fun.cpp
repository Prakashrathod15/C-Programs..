#include<iostream>
using namespace std;
class c2;


class c1
{
    int val;
    public:
    void indata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout<<val<<endl;
    }
    friend void exchange(c1 &x,c2 &y);

};

class c2
{
    int data;
    public:
    void indata(int a)
    {
        data = a;
    }
    void display(void)
    {
        cout<<data<<endl;
    }
    friend void exchange(c1 &x,c2 &y);
};

void exchange(c1 &x,c2 &y)
{
    int temp = x.val;
    x.val = y.data;
    y.data = temp;
}

int main()
{
int p,q;
c1 oc1;
c2 oc2;
cout<<" enter two number for swaping "<<endl;
cin>>p>>q;
cout<<" the value of p is before exchange : "<<p<<endl;
cout<<" the value of q is before exchange : "<<q<<endl;
oc1.indata(p);
oc2.indata(q);

exchange(oc1,oc2);

cout<<" the value before (1) exchange becomes : "<<endl;
oc1.display();
cout<<" the value after exchange becomes : "<<endl;
oc2.display();




















    return 0;
}