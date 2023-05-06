#include<iostream>

using namespace std;
template<class T>
class vector
{

  public:  
    T* arr;
    int size;
     vector(int m)
     {
         size=m;
         arr = new int[size];

     }   
     vector doctproduct( vector &v )
     {
         int d=0;
         for(int i=0;i<size;i++)
         {
             d+=this->arr[i]*v.arr[i];
         }
         return d;
     } 


};

int main()
{
   vector<int>v1(3);
   v1.arr[0]=4;
   v1.arr[1]=7;
   v1.arr[3]=5;
    vector<int>v2(3);
   v2.arr[0]=4;
   v2.arr[1]=3;
   v2.arr[3]=9;

   T  = v1.doctproduct(v2);
   cout<<T<<endl;







    return 0;
}