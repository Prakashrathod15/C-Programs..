#include<iostream>
using namespace std;

class code
{
int id;
public:
code() {};      // constructor
code (int a)
{
    id = a;                 // constructor again
}
code (code &x)
{
    id = x.id;              //  copy in the value
}

void display(void)
{
    cout<<"  is : "<<id<<endl;

}


};

int main()
{
   code A(100);            // object A is created & initialised
   code B(A);              // copy constructor is called
   code C = A;             // copy constructor is call again

   code D;                  // D is created , not initialised
   D = A;                   // copy constructor not called

cout<<" id of A : "; A.display();
cout<<" id of B : "; B.display();
cout<<" id of C : "; C.display();
cout<<" id of D : "; D.display();











    return 0;
}