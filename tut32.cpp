#include<iostream>
using namespace std;

class simple
{
    int data1,data2;
    public:
     simple(int a,int b=9)
     {
         data1=a;
         data2=b;
     }
     void printdata();
};
void simple::printdata()
{
    cout<<" the value of data is "<<data1<<" and "<<data2<<endl;

}

int main()
{
    int r,s,p,q;
    cout<<" enter four numbers "<<endl;
    cin>>r>>s>>p>>q;
  simple n(r,s);
  n.printdata();
















    return 0;
}