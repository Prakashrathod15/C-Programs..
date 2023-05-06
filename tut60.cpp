#include<iostream>
// if you want read and write the on files so we can use the some classes that provide by c++ - these file found in ---->
#include<fstream>
using namespace std;
// the useful classes for working with the file in c++ are :
// 1.fstreamBase 
// 2.ifstream ---------> derived from fstreambase -----> Read operation on files
// 3.ofstream ---------> derived from fstreambase -----> write operation on files
// In order to work with file in c++ , you have to open it , primary there are 2 ways to open a file
// 1.Using a constructor 
// 2.using the membare function open( ) of the class
// -----> first create new file

int main()
{
    /*
  string st =" hy bhaiii ";
  ofstream out("write");
  out<<st;

*/

 /*string st2;
ifstream in("Read");
getline(in,st2);
cout<<st2; */


string st3 = " har har mahadev ! har har mahadev ! har har mahadev ! ";
ofstream out("write");
out<<st3;














    return 0;
}