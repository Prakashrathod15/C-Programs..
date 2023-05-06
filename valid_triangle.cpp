#include<iostream>
using namespace std;
int main()
{

// problem = you are given length of 3 sides of valid-triangle .you need to print any one of the following output depending 
// print 1 - If triangle is equilateral
// print 0 - if triangle is Isosceles
// print 1 - If triangle is scalene

int s1,s2,s3;
cout<<endl;
cout<<" enter the three side of triangle "<<endl;
cin>>s1>>s2>>s3;

if(s1+s2>s3)
{
    cout<<" Valid triangle "<<endl;

}
else if(s1+s2<s3)
{
    cout<<" Invalid triangle "<<endl;
}
else if(s2+s3>s1)
{
    cout<<" valid triangle "<<endl;
}
else if(s2+s3>s1)
{
    cout<<" Invalid triangle "<<endl;
}
else if(s2+s3<s1)
{
    cout<<" Invalid triangle "<<endl;
}
else if(s2+s3>s1)
{
    cout<<" Invalid triangle "<<endl;
}


























    return 0;
}