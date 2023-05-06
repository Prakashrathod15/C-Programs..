#include<iostream>
using namespace std;

int main()
{
int side1,side2,side3;
cout<<endl;
cout<<" enter three side of triangle : "<<endl;
 cin>>side1>>side2>>side3;
cout<<endl;

 if((side1+side2)>side3)
 {

    if((side2+side3)>side1)
    {


        if((side1+side3)>side2)
        {
            cout<<" triangle is valid "<<endl;
        }
        else
        {
            cout<<" triangle is Invalid "<<endl;
        }
    }
    else
    {
       cout<<" triangle is invalid "<<endl;
    }
}
else
{
    cout<<" triangle is invalid "<<endl;
}

cout<<" side1 is : "<<side1<<endl<<" side2 is : "<<side2<<endl<<" side3 is : "<<side3<<endl;












    return 0;
}