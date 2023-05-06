#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

  ofstream out;
  out.open("sample61");
  out<<" this is me "<<endl;
  out<<" This is also me "<<endl;
  out<<" its me "<<endl;
  out.close();

  ifstream in;
  in.open("sample61");
  string str;
  // in>>str;
  // cout<<str;

  while(in.eof()==0)
  {
      getline(in,str);
      cout<<str<<endl;
  }
  in.close();





















    return 0;
}