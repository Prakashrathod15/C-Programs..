#include<iostream>
using namespace std;
int main()
{
   cout<<" please enter one no "<<endl;
   int n;
   int ans = 0;
   cin>>n;

   while(n>0)
   {
       int digit = n%10;
       ans = ans + digit;
       n = n/10;

   }



cout<<" the ans is "<<ans<<endl;












    return 0;
}