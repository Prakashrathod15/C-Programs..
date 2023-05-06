#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int l = n+m;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m )
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else 
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    cout<<endl<<" now we print the arr3"<<endl;
    for(int i  =0 ; i<l; i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main()
{

cout<<" enter size of an array "<<endl;
int n;
cin>>n;
int arr1[100];
cout<<" please input the array "<<endl;
for(int i = 0; i<n; i++)
{
    cin>>arr1[i];
}

cout<<endl;

int arr2[100];
cout<<" enter size of second array "<<endl;
int m;
cin>>m;
cout<<" enter input in the array "<<endl;
for(int i  = 0; i<m; i++)
{
    cin>>arr2[i];
}
cout<<endl;


int arr3[100] = {0};

merge(arr1,arr2,arr3,n,m);


    return 0;
}