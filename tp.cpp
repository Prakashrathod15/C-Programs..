#include<iostream>
using namespace std;

int main()
{

int a,b,c;

cout<<endl;
cout<<" enter three no "<<endl;
cin>>a>>b>>c;

if(a>b)
{
    if(a>c)
    {
        cout<<" a is big "<<endl;
    }
    else 
    {
        cout<<" nothing "<<endl;
    }
}
else if(b>a)
{
    if(b>c)
    {
        cout<<" b is big "<<endl;
    }
    else
    {
        cout<<" c is big "<<endl;
    }
}
else if(c>a)
{
    cout<<"c is big "<<endl;
}
else 
{
    cout<<" a is large"<<endl;
}



















    return 0;
}