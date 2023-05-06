#include<iostream>
using namespace std;

class complex
{
    int real , imaginary;
    public:
        void setdata(int a,int b)
        {
            real=a;
            imaginary=b;
        }
        void show_data()
        {
            cout<<" The real part of number is : "<<real<<endl;
            cout<<" the imaginary part of number is : "<<imaginary<<endl;

        }



};

int main()
{

    cout<<endl;
    cout<<" ----------------------- new & arrpy operator -----------------------------"<<endl;
    cout<<endl;
    int a,b;
    cout<<" enter two number : "<<endl;
    cin>>a>>b;
    cout<<endl;
     // 1.creating object using pointer or new operator
     cout<<" using new operator "<<endl;
    complex *ptr = new complex;    // syntax - class name pointer = new class name 
    ptr->setdata(a,b);
    ptr->show_data();

    //2.another way 
    cout<<endl;
    cout<<" passing address of object to pointer "<<endl;
    complex c1;
    complex *ptr2 = &c1;
    ptr2->setdata(3,9);   // array operator -> means that he is dereferencing the pointer & run the function
    ptr2->show_data();
    cout<<endl;
    (*ptr).setdata(a,b);
    (*ptr).show_data();
    cout<<endl;

    // creaing array of object using new operator 
    cout<<"creaing array of object using new operator "<<endl;
    complex *ptr3 = new complex[3];
    ptr3->setdata(a,b);
    ptr3->show_data();



















    return 0;
}