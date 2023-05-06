#include<iostream>
#include<climits>
using namespace std;
int main()
{

cout<<" enter size of an array "<<endl;
int n;
cin>>n;
int input[200];
cout<<" input the array "<<endl;
for(int i = 0; i<n; i++)
{
    cin>>input[i];
}

int l=input[0];
    int s=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(input[i]>l){
            s=l;
            l=input[i];
            
    }      
     else if(input[i]>s && input[i]!=l)
     {
          s=input[i];
            
     }
        
    }
cout<<endl<<" the second largest is "<<s<<endl;

















    return 0;
}