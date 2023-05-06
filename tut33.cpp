#include<iostream>
using namespace std;

class BankDeposit
{
  int principal;
  int year;
  float interestRate;
  float returnvalue;

  public:
   BankDeposit(){};
   BankDeposit(int p,int y,float r);
   BankDeposit(int p,int y,int r);
   void show();

};
BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal = p;
    year = y;
    interestRate = principal;

    returnvalue =0;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+r);
    }

}
BankDeposit :: BankDeposit(int p,int y,int r)
{
  principal =p;
  year = y;
  interestRate = float(r)/100;
  returnvalue = principal;
  for(int i=0;i<y;i++)
  {
      returnvalue = returnvalue*(1+interestRate);
  }

}
void BankDeposit :: show()
{
  cout<<endl<<" principal amount was "<<principal<<endl<<" return value after "<<year<<" is "<<returnvalue<<endl;

}
int main()
{

  BankDeposit bd1,bd2,bd3;
  int p,y;
  float r;
  int R;
  cout<<" enter the value of p y & r "<<endl;
  cin>>p>>y>>r;
  bd1=BankDeposit(p,y,r);
  bd1.show();

    return 0;
}