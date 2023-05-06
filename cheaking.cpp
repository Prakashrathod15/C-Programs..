#include<iostream>
using namespace std;
int main()
{
cout<<" enter size of an array "<<endl;
int n = 6;

int input[n] = {12, 17, 1 ,3 ,6 ,11 };
int d = 4;
int start = 0;
    int end = d;
    while(start<=end)
    {
        int temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
    start = d+1;
    end = n-1;
    while(start<=end)
    {
        int temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
    start = 0;
    end = n-1;
    while(start<=end)
    {
        int temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }


cout<<" printing the array "<<endl;
for(int i = 0; i<n; i++)
{
    cout<<input[i]<<" ";
}
cout<<endl;














    return 0;
}