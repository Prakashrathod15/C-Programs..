 #include <iostream>
using namespace std;

class number
{
    int a;                // _------------------------- COPY CONSTRUCTOR ----------------------------------------
public:
    number()
    {
        a = 0;
    }                    // COPY constructor is a such a type of constructor which make copy of other constructor
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << " copy constructor is called " << endl
             << " YOUR IN COPY CONSTRUCTOR BLOCK " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << " the number for this object is " << a << endl;
    }
};
int main()
{
     // we get error here so first we make first default constructor in class
    number x, y, z(45);
    // z.display();

    number z1(z);
    z1.display();
    cout << endl
         << endl;

    number z2;
    z2 = z;

    z2.display();

    return 0;
}