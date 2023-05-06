#include<iostream>
#include<iostream>
using namespace std;

class BaseCWH
{
    protected:
      string title;
      float rating;
    public:
        BaseCWH(string s,float r )
        {
            title =s;
            rating = r;
        }
     virtual void display()=0;  // this is pure virtual function 

};

class CWHvedio : public BaseCWH
{
    int vediolengh;
    public:
       CWHvedio(string s,float r,int vlen) : BaseCWH(s,r)
       {
           vediolengh=vlen;

       }   
    void display()
    {
        cout<<" The vedio title is fantastic "<<title<<endl;
        cout<<" The vedio Rating is : "<<rating<<endl;
        cout<<" The vediolenght is :  "<<vediolengh<<endl;
    }

};

class CWHtex : public BaseCWH
{
       int word;
    public:
     CWHtex(string s,float r,int w):BaseCWH(s,r)
     {
         word=w;
     }
    void display()
    {
        cout<<" The vwebsite title is Amezing : "<<title<<endl;
        cout<<" The website rating is : "<<rating<<endl;
        cout<<" The webside content in word :  "<<word<<endl;
    }

};

int main()
{
    string s;
    int vlen,w;
    float r;
    cout<<endl<<endl;
    cout<<" Enter title : "; cin>>s;
    cout<<" Enter Rating : "; cin>>r;
    cout<<" Enter content of word in no : "; cin>>w;
    cout<<" Enter lenght of vedio : "; cin>>vlen;
    cout<<endl;

class BaseCWH *ptr1, *ptr2;

class CWHvedio vedio(s,r,vlen);
class CWHtex tex(s,r,w);


ptr1=&vedio;
ptr2=&tex;


ptr1->display();
ptr2->display();



















    return 0;
}