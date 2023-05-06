#include<iostream>
#include<vector>
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


cout<<" enter the position where you can revese the array "<<endl;
int m;
cin>>m;

int start = m;
int end = n-1;
while(start<=end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start ++;
    end--;


}
cout<<" now the array become "<<endl;
for(int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;




















    return 0;

}