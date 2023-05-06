#include<iostream>
#include<string>
using namespace std;

class integers
{
    int m,n;
    public:
    integers(int,int );
    void display(void)
    {
        cout<<" the private members are : "<<" m "<<m<<endl<<"  n "<<n<<endl;
    }
};
integers :: integers(int a,int b)
{
    m=a;
    n=b;
}


int main()
{

int a,b;
cout<<" Enter the number : "<<endl;
cin>>a>>b;
  integers into =integers(a,b);
  into.display();







    return 0;
}