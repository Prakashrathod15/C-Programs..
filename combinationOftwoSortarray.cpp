#include<iostream>
using namespace std;
int main()
{

cout<<" enter size of first and second array "<<endl;
int no1,no2;
cin>>no1>>no2;
int arr1[100];
int arr2[100];
cout<<" input the first array "<<endl;
for(int i =0; i<no1; i++)
{
    cin>>arr1[i];
}
cout<<" inpute second array "<<endl;
for(int i =0; i<no2; i++)
{
    cin>>arr2[i];
}
int arr[100];
int n = no1+no2;
int i = 0;
int j = 0;
int k = 0;
while(i<no1 && j<no2)
{
    if(arr1[i]<arr2[j])
    {
          arr[k] = arr[i];
          i++;
          k++;
    }
    else
    {
        arr[k] = arr[j];
        i++;
        k++;
    }
}
while(i<no1)
{
    arr[k] = arr1[i];
    k++;
    i++;
}
while(j<no2)
{
    arr[k] = arr2[j];
    j++;
    k++;
}

cout<<" now array become "<<endl;
for(int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;



















    return 0;
}