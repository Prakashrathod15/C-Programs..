#include<iostream>
#include<cmath>
using namespace std;
int main()
{

cout<<" reverse bit "<<endl;
int no;
int n;
cout<<" input no "<<endl;
cin>>n;
int digit = 0;
int ans = 0;
int i = 0;
while(n!=0)
{
    digit = n%10;
    ans = (ans*10)+digit;
    n = n/10;
    i++;
}
cout<<endl;
cout<<" your no is "<<ans<<endl;
















    return 0;
}