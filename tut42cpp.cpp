#include<iostream>
using namespace std;
// problem program : 1) create two classes -1. Simple calculator - take input of two number using utility function and performce
//                                                              ( - +,-,/ ) , and display the result using another utility function
//                                            2. Scientific calculator - an perform any four scientific operations  your choice and display  
//                                                                       using another function
//
// create these two class InhybridCalculator  and inherites its using these 2 classes
//1. what type of Inheritance are you using 
//2. which mode of inheritance are you using 
//3. create an object of HybridCalculator and display result of simple and scientific calculator 
//4. how is code reusebilidty implemented.

class SimpleCalculator
{
   protected:
   int a,b;
   public:
   int p,q;
   void setnumber1(int p,int q)
   {
       
       a=p;
       b=q;
   }
   void display_result()
   {
       cout<<endl;
       cout<<" Your in simple calculator "<<endl;
       cout<<endl;
       cout<<" ADDITION IS "<<endl;
       cout<<" the operation is : "<<" + "<<a+b<<endl;
       cout<<" SUBSTRACTION "<<endl;
       cout<<" the operation is : "<<" - "<<a-b<<endl;
       cout<<" DIVISION "<<endl;
       cout<<" the operstion is : "<<" DIV "<<a/b<<endl;
       cout<<" MULTIPLICATION "<<endl;
       cout<<" the operation is : "<<a*b<<endl;
       cout<<endl;
   }
};
class ScientificCalculator
{
   protected:
   float a,b;
   public:
   void setnumber2(int p,int q)
   {
       a=p;
       b=q;
   }
void show()
{   
    cout<<endl;
    cout<<" your in Scientific Calculator "<<endl;
    cout<<endl;
    cout<<" SQUARE "<<endl;
    cout<<" the square root of A is : "<<a*a<<" the square root of B is : "<<b*b<<endl;
    cout<<" cube "<<endl;
    cout<<" the cube of A is : "<<a*a*a<<" the cube of B is : "<<b*b*b<<endl;
    cout<<endl<<endl;
}


};

class InhybrideCalculator : public SimpleCalculator , public ScientificCalculator
{
    public:
    int p,q;
    void input()
    {

    cout<<endl<<endl;
    cout<<" enter two NUmber for calculation of simple and Scientific "<<endl;
    cin>>p>>q;
    setnumber1(p,q);
    setnumber2(p,q);
    }

};
int main()
{

  InhybrideCalculator calc;
  calc.input();
  calc.display_result();
  calc.show();



















    return 0;
}