#include<iostream>
using namespace std;


int main(){

    int countCh = 0;
    int countDigit = 0;
    int countWhite = 0;
    char ch = cin.get();
    cout<<" enter "<<endl;
    while(ch != '$' )
    {
        if(ch=='a'&& ch =='z' )
        {
            countCh++;
           cin>>ch;
        }
        else if(ch== '0' && ch == '9')
        {
           countDigit++;
          cin>>ch;
        }
        else if(ch == ' ' || ch == '\t' || ch == '\n')
        {
             countDigit++;
        }
    }
    cout<<countCh<<" "<<countDigit<<" "<<countWhite++;
  



    
    







    return 0;
}