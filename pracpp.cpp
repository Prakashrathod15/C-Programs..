#include<iostream>
using namespace std;

int count=0;
class sum
{
  public:
  sum()
  {
      count++;
      cout<<" the object is create : "<<count<<endl;
  }
  ~sum()
  {
      
      cout<<" the object is destroy : "<<count<<endl;
      count--;
  }


};

int main()
{

sum s1,s2;
{
    sum s3;
}
















    return 0;
}