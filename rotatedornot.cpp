#include<iostream>
using namespace std;
int main()
{

cout<<" enter size of an array "<<endl;
int n;
cin>>n;
int arr[100];
cout<<" input the array "<<endl;
for(int i = 0; i<n; i++)
{
    cin>>arr[i];
}
int min = arr[0];
int index = 0;
for(int i = 0; i<n; i++)
{
    if(min>arr[i])
    {
        min = arr[i];
        index = i;
    }
}

cout<<" the val of count is "<<index<<endl;


// 5 6 1 2 3 4
// 3 6 8 9 10



















    return 0;
}