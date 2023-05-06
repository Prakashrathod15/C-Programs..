#include<iostream>
using namespace std;

int main()
{

 int num[]={56,75,22,18,90};
 int *ptr;
 int i;
 cout<<endl;
 cout<<" the array value are : "<<endl;
 for(i=0;i<5;i++)
   cout<<num[i]<<endl;

cout<<endl;
cout<<" allocating the Base address of num to pointer "<<endl;

ptr =num;
cout<<endl;
cout<<" printing the value in the array "<<endl;
cout<<" the value of Ptr : "<<*ptr<<endl;
cout<<" the address of num is : "<<&num<<endl;
cout<<" the address of ptr is : "<<ptr<<endl;
cout<<endl;

ptr++;
cout<<" the value of ptr++ : "<<*ptr<<endl;

ptr--;
cout<<" the value of ptr-- : "<<*ptr<<endl;
cout<<endl;

ptr=ptr+2;
cout<<" the value of ptr+2 is : "<<*ptr<<endl;
cout<<endl;

ptr=ptr-1;
cout<<" the value of ptr-1 is : "<<*ptr<<endl;
cout<<endl;

ptr+=3;
cout<<" the value of ptr+=3 is : "<<*ptr<<endl;
cout<<endl;

ptr+=2;
cout<<" the value of ptr+=2 is : "<<*ptr<<endl;
cout<<endl;


cout<<" *ptr is : "<<*ptr<<endl;


























    return 0;
}