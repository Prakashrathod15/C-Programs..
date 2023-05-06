#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
  int a,b;
  public:
  void getdata()
  {  
      cout<<endl;
      cout<<" Your in Simple calculator "<<endl;
      cout<<" Enter the value of A : "<<endl;
      cin>>a;
      cout<<" Enter the value of B : "<<endl;
      cin>>b;
  }
  void performoperationSimple()
  {
      cout<<" the value of a+b is : "<<a+b<<endl;
      cout<<" the value of a-b is : "<<a-b<<endl;
      cout<<" the value of a*b is : "<<a*b<<endl;
      cout<<" the value of a/b is : "<<a/b<<endl;
      cout<<endl<<endl;
  }

};
class scientificalculator
{
  
  int a,b;
  public:
  void getdataScience()
  {   cout<<endl;
      cout<<" you are in Scientific calculator "<<endl;
      cout<<" Enter the value of A : "<<endl;
      cin>>a;
      cout<<" Enter the value of B : "<<endl;
      cin>>b;
  }
  void performoperationScience()
  {
      cout<<" the value of cos(a) Is : "<<cos(a)<<endl;
      cout<<" the value of sin(a) is : "<<sin(a)<<endl;
      cout<<" the value of exp(a) is : "<<exp(a)<<endl;
      cout<<" the value of tan(a) is : "<<tan(a)<<endl;
      cout<<endl;
  }

};
class hybridCalculator : public simplecalculator,public scientificalculator
{
   






};


int main()
{
   
hybridCalculator calc;
calc.getdata();
calc.performoperationSimple();
calc.getdataScience();
calc. performoperationScience();














    return 0;
}