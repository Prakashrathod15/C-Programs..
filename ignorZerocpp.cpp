#include<iostream>
using namespace std;
void MergeingZero(int arr1[], int arr2[], int arr3[], int n, int m)
{
    int l = n+m;
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            if(arr1[i]!=0)
            {
                arr3[k] = arr1[i];
                k++;
                i++;
            }
            else
            {
                i++;
            }
        }
        else 
        {
            if(arr2[j]!=0)
            {
                arr3[k] = arr2[j];
                k++;
                j++;
            }
            else
            {
                j++;
            }
        }
    }
    


    while(i<n)
    {
        if(arr1[i]!=0)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            i++;
        }
    }
     while(j<n)
    {
        if(arr2[j]!=0)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            j++;
        }
    }
   cout<<endl;
   cout<<" now printing the array "<<endl;
   for(int i  =0; i<l; i++)
   {
    cout<<arr3[i]<<" ";
   } 
   cout<<endl;

}
int main()
{


cout<<" enter size of first and second array "<<endl;
int n,m;
cin>>n>>m;
int arr1[100];
int arr2[100];
cout<<" input the first array "<<endl;
for(int i = 0; i<n; i++)
{
    cin>>arr1[i];
}
cout<<endl;
cout<<" input the second array "<<endl;
for(int i = 0; i<n; i++)
{
    cin>>arr2[i];
}
cout<<endl;
int arr3[100] ={0};
MergeingZero(arr1,arr2,arr3,n,m);



    return 0;
}