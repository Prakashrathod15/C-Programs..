#include <iostream>

using namespace std;

int main()
{
  // int n, sum = 1, n1 =1, n2 =0,sum2=0;
  cout<<" enter n "<<endl;
  int a;
  cin>>a;
  int n , b = 10 , temp = 0;
  cout<<" the value of a is : "<<a<<endl;
  cout<<" the value of b is : "<<b<<endl;
  cout<<" the value of temp is : "<<temp<<endl;
  temp = a;
  a = b;
  b = temp;
  cout<<" after swap "<<" a "<<a<<" b "<<b<<" temp "<<temp<<endl;


    return 0;
}