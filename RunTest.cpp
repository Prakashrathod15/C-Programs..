#include<iostream>
using namespace std;
int main()
{
int n =11;
int input[n]={8 ,9 ,9 ,1 ,7 ,5 ,5 ,10 ,1 ,0 ,7 };

   int min = -9999;
    for(int i = 0; i<n; i++)
    {
        if(input[i]>min)
        {
            min = input[i];
        }
    }
    int count = 0;
    for(int i  = 0; i<n; i++)
    {
        if(input[i]==min)
        {
            count = i;
        }
    }
    input[count] = 0;
    min = -9999999;
    for(int i = 0; i<n; i++)
    {
        if(input[i]>min)
        {
            min = input[i];
        }
    }


cout<<" ans is "<<min<<endl;













    return 0;
}