#include<iostream>
using namespace std;

int main()
{

// what is a pointer ?
// ---> pointer is a datatype which store addresses of other variables
// how to declare pointers
int a =5;
int *ptr =&a;  // here you can see here int type datatype pointer  is declare . and he is store address of a 

cout<<" the value of ptr is "<<" "<<ptr<<endl;  // it will give us address of A. in memory where the value of a is stored
cout<<" the value of *(ptr) is "<<" "<<*(ptr)<<endl;  // it will give us the value of a ...i..e..5 is this know as dereferencing 
cout<<" the value of *ptr is "<<" "<<*ptr<<endl; // it will give us value of a i...e..5
cout<<" the value of &ptr  is "<<" "<<&ptr<<endl;  // it will give us address of ptr 


// new operator/ Keyword

int *p = new int(90);   // this is called dynamically allocation of memory. here p is pointer that
cout<<" the value at *p is : "<<*(p)<<endl;
cout<<endl<<endl;

int *arr =new int[2];
arr[0]=30;
arr[1]=60;
*(arr+2)=80;// arr[2]=90;
delete[] arr;
cout<<" the value at arr[0] is : "<<arr[0]<<endl;
cout<<" the value at arr[1] is : "<<arr[1]<<endl;
cout<<" the value at arr[2] is : "<<arr[2]<<endl;
cout<<endl;
cout<<" the value of *arr is : "<<*arr<<endl;
cout<<" the address of arr is : "<<&arr<<endl;
cout<<" the address of &arr[0] is : "<<&arr[0]<<endl;





















    return 0;
}