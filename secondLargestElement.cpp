#include<iostream>
#include<climits>
using namespace std;
int main()
{

cout<<" enter size of an array "<<endl;
int n;
cin>>n;
int arr[100];
cout<<" input the array "<<endl;
for(int i =0; i<n; i++)
{
    cin>>arr[i];
}
cout<<endl;
int min = INT_MIN; // 3 5 2 1 8 
int ans = 0;
for(int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<" before "<<endl;
for(int i = 0; i<n; i++)
{
    if(arr[i]>min)
    {
        min = arr[i];
    }
}
int count = 0;
for(int i = 0; i<n; i++)
{
    if(arr[i]==min)
    {
        count = i;
    }
}
cout<<" value of count is "<<count<<endl;
//arr[count] = 0;
for(int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<" after "<<endl;
ans = min;
cout<<" the ans is "<<min<<endl;
ans = INT_MIN;
for(int i = 0; i<n; i++)
{
    if(arr[i]>ans)
    {
        ans = arr[i];
    }
}

cout<<" and the second largest element is "<<ans<<endl;




int l = -9999;
int s = -9999;

for(int i = 0; i<n; i++)
{
    for(int j = i+1; j<n; j++)
    {
        if(arr[i]>l)
        {
            l = arr[i];
        }
    }
}

cout<<" the lar is "<<l<<" and second is "<<s<<endl;










    return 0;
}