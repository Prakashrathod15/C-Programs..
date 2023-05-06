#include<iostream>
using namespace std;

int main()
{

    int arr[10]={ 10,20,30,40,50,60,70,80,90,100};

    int p, i,num,*ptr;

    ptr=arr;

    cout<<" enter the that to be searh : "<<endl;
    cin>>num;

    for(i=0;i<10;i++)
    {
        if(*ptr==num)
        {    
            cout<<" the ptr is : "<<num<<endl;
            cout<<" the *ptr is : "<<*ptr<<endl;
            cout<<" the ptr is : "<<ptr<<endl;
            cout<<" the  &arr is : "<<&arr<<endl;
            cout<<endl<<num<<" is present in the array "<<endl;
            break;

        }
        else
         if(i==9)
         cout<<endl<<num<<" is not present in the array "<<endl;
         ptr++;
    }
































    return 0;
}