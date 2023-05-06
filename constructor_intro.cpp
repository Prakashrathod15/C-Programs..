#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);
    void printdata()
    {
        cout << " the a  is : " << a << endl
             << " the b is : " << b << endl;
    }

    // ----------> constuctor declaration
    // constructor is a special member function with same name as a class.it is used to itialise the object of its class
    // It is automatically invoked whenever an object is created.
};
complex::complex(void) // ---------------> this is default constructor
{
    int p, q;
    cout << " enter two value for constru`ction operation " << endl;
    cin >> p >> q;

    a = p;
    b = q;
}

int main()
{

    complex c;
    c.printdata();

    // properties of CONSTRUCTOR :
    // 1.It should be declaare in the public section of the class
    // 2.they are automatically invoked whenever the object is created
    // 3.They cannot return value . constructor is not return type.
    // 4.It can have DEFAULT ARGUMENT.
    // 5.We cannot refer to their address.

    return 0;
}