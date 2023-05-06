#include<iostream>
using namespace std;
int main()
{

cout<<" enter size of an array "<<endl;
int n = 4;
//cin>>n;
int arr[4]= {-1,-100,3,99};
//cout<<" input in the array "<<endl;
//for(int i =0; i<n; i++)
//{
//    cin>>arr[i];
//}
cout<<endl<<" enter index where we get reverse of an array "<<endl;
int k = 2;
// cin>>k;
cout<<endl;
int start = 0;
int end = k-1 ;
while(start<=end) // 1 2 3 4 5 6 7 8 9 10 k = 4
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}  // 17 1 3 6 11 12 k = 4
cout<<" half done revesing "<<endl;
for(int i =0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
start = k;
end = n-1;
while(start<=end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
} /// 12 17 1 3 6 11 

cout<<" second half done "<<endl;
for(int i =0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<" now reversing the whole array "<<endl;
start = 0;
end = n-1;
while(start<=end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}
cout<<" everyting is done now print the array "<<endl<<" and the array is "<<endl;
for(int i =0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
// 0 1 2 3  4  5  6  7  8  9  10 11 12

// 1 3 6 11 12 17 22 26 30 33 38


// 26 30 33 38 1 3 6 11 12 17 22 


















    return 0;
}