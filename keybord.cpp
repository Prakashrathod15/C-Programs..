#include<iostream>
using namespace std;

class first 
{
    public:
    int a;
    string s;
    void print()
    {
        cout<<" enter first name "<<endl;
        cin>>s;
    }
};

class display : public first
{

   public:

    display(void)
     { 
         cout<<s;
     }


};

int main()
{


display dis;
dis.print();













    return 0;
}