#include<iostream>
#include<string>
using namespace std;

class BaseCWH
{
    protected:
    string title;
    float rating;
    public:
     BaseCWH(string s,float r)
     {
         title =s;
         rating =r;
     }
     virtual void display(){
         cout<<" jahar hai bhai "<<endl;
     }
};

class CHWvedio : public BaseCWH
{
    int vediolenght;
    public:
    CHWvedio(string s,float r,int vlen):BaseCWH(s,r)
    {
        vediolenght = vlen;
    }
    void display()
    {
        cout<<" We are in construct of CHWvedio "<<endl;
        cout<<" This is an amezing vedio with title "<<title<<endl;
        cout<<" Rating : "<<rating<<" Out of 5 star "<<endl;
        cout<<" Leanght of this vedio "<<vediolenght<<" Minutes "<<endl;

    }

};

class CWHtex : public BaseCWH
{
    int word;
    public:
    CWHtex(string s,float r,int Wc ): BaseCWH(s,r)
    {
        word = Wc;
    }
    void display()
    {
        cout<<" we are in CWHtex constructor "<<endl;
        cout<<" This is an amezing vedio with title  "<<title<<endl;
        cout<<" Rating of this tutorial is "<<rating<<" Out of 5 star "<<endl;
       // cout<<" leanght of this vedio is : "<<vediolenght<<" Minutes "<<endl;
        cout<<" The numbers of word is : "<<word<<endl;
    }

};

int main()
{

int word;
float rating ,vlen;

string title;
cout<<endl;
cout<<" please enter title of vedio "<<endl;
cin>>title;
cout<<" please enter rating of vedio "<<endl;
cin>>rating;
cout<<" please enter no of words "<<endl;
cin>>word;
cout<<" enter lenght of vedio "<<endl;
cin>>vlen;
cout<<endl;

// for code with Harry vedio

// CHWvedio djvedio(title,rating,vlen);
 // djvedio.display();

CHWvedio ved(title,rating,vlen);
CWHtex tex(title,rating,word);
cout<<endl<<endl;

BaseCWH *poin[2];
poin[0]=&ved;
poin[1]=&tex;

poin[0]->display();
cout<<endl<<endl;
//poin[1]->display();





















    return 0;
}