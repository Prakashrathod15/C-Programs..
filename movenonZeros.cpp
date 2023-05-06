#include<iostream>
using namespace std;
void movezero(int arr[], int n)
{
    int nonzero = 0;
    for(int i  =0 ; i<n; i++)
    {
        if(arr[i]!=0)
        {
            int temp = arr[i];
            arr[i] = arr[nonzero];
            arr[nonzero] = temp;
            nonzero++;
        }
    }
    cout<<endl;
    cout<<" printing the array "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cout<<" enter size of an array "<<endl;
    int n;
    cin>>n;
    int arr[100];
    cout<<" input the array "<<endl;
    for(int i = 0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    movezero(arr,n);


    return 0;
}