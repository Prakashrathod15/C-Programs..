#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   cout<<" enter no "<<endl;
   int n;
   cin>>n;
   int bit =0;
   int ans = 0;
   int i = 0;
   while(n!=0)
   {
       bit = n&1;
       ans = bit*pow(10,i)+ans;
       n = n>>1;
       i++;
   }
   cout<<endl;
   cout<<" your ans is "<<ans<<endl;















    return 0;
}