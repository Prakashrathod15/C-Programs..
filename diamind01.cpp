#include<iostream>
using namespace std;
int main()
{

int n ;
cout<<" Enter n "<<endl;
cin>>n;
int i = 1;
while(i<=n/2+1)
{
    int k = 1;
    while(k<=n/2+1-i)
    {
        cout<<" ";
        k = k+1;
    }
    int j = 1;
    while(j<=2*i-1)
    {
        cout<<j;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}

int l = 1;
while(l<n/2)
{
    int k =1;
    while(k<=l)
    {
        cout<<" ";
        k = k+1;
    }
    int j = 1;
    int x=n/2;
        int b=1;
        while (b<=2*(x-l+1)-1)
        {
            cout<<b;
            b++;
            
         }
        cout << endl;
        l++;
        
}

























    return 0;
}