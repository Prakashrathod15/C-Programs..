#include<iostream>
using namespace std;

class shop
{
   int id;
   float price;

   public:
      void setdata(int a,float b)
      {
          id =a;
          price =b;
      }
      void getdata()
      {
          cout<<" The Iteam Id is : "<<id<<endl;
          cout<<" The Iteam Price is : "<<price<<endl;
      }
};

int main()
{   

    cout<<endl;
   int size ;
   cout<<" enter size of iteam "<<endl;
   cin>>size;
   
   shop *ptr =new shop[size];
   shop *ptrTemp =ptr;
   cout<<endl;
   int p,q,i;
   for(i=0;i<size;i++)
   {
       cout<<" Enter Id and price of Iteam "<<i+1;
       cin>>p>>q;
       ptr->setdata(p,q);
       ptr->getdata();
       ptr++;
   }

   cout<<endl;

   for(int j =0; j<size;j++)
   {
       cout<<" Iteam no : "<<i+1<<endl;
       ptrTemp->getdata();
   }















    return 0;
}