#include<iostream>
using namespace std;
int count =0;

class num
{

public:
num()
{
    count++;
    cout<<" this the time when constructor is called for object "<<count<<endl;
}

~num()
{
    cout<<" this the time when destructor is called for object number "<<count<<endl;
    count--;
}



};

int main()
{

cout<<" we are inside in main function "<<endl;
cout<<" creating first object n1 "<<endl;
num n1;
{   
    cout<<" entering this block "<<endl;
    cout<<" creating two or more object "<<endl;
    num n2,n3;
    cout<<" exiting the block "<<endl;
}

cout<<" Back to main "<<endl;








    return 0;
}