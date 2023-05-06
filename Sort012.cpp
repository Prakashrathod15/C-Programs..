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
cout<<endl;
int temp[100] = {0};
int j = 0;
for(int i = 0; i<n; i++)
{
    if(arr[i]==0)
    {
        temp[j] = 0;
        j++;
    }
    else if(arr[i]==1)
    {
        temp[j]==1;
        j++;
    }
    else if(arr[i]==2)
    {
        temp[j]=2;
        j++;
    }
}

cout<<endl<<" print the array "<<endl;
for(int i = 0; i<n; i++)
{
    cout<<temp[i]<<" ";
}
cout<<endl;



























    return 0;
}