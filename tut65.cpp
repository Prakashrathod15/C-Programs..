#include<iostream>
using namespace std;
template<class t1,class t2>
class myclass
{
    public:
    int data1;
    char data2;
    myclass(t1 a, t2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    int a= 10;
    char b = 'p';

    myclass<int,char> obj(a,b);
    obj.display();


    return 0;
}