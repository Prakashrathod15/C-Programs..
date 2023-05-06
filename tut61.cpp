#include<iostream>
#include<fstream>
using namespace std;

int main()
{  
    string str1;
   cout<<" Enter your name : "<<endl;
   cin>>str1;
   ofstream out("sample61");
   // out<<str1;
   out<<str1+" is my name ";
   out.close();




   string str2;
   ifstream in("sample61");
   in>>str2;
   cout<<" The context of this file is : "<<str2;
   in.close();

   












    return 0;
}