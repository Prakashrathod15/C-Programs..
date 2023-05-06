#include<iostream>
using namespace std;

class alpha
{
    int x;
    public:
       alpha(int i)
       {
           x=i;
           cout<<" alpha constructed "<<endl;
       }

       void show_alpha()
       {
           cout<<"alpha  x = "<<x<<endl;
       }

       
};

class beta
{

    float p,q;
    public:
    beta(float a,float b ):p(a),q(b+q)
    {
        cout<<" beta constructed "<<endl;

    }
    void show_beta()
    {
        cout<<" beta p = "<<p<<endl;
        cout<<" beta q = "<<q<<endl;
    }

};

class gamma : public beta , public alpha
{
    int u,v;
    public:
    gamma(int a,int b, float c): alpha(a*2),beta(c,c),u(a)
    {
        v=b;
        cout<<" gamma constructed "<<endl;

    }
    void show_gamma()
    {
        cout<<" gamma u = " <<u<<endl;
        cout<<" gamma v = "<<v<<endl;
    }
};

int main()
{

    cout<<endl;
    cout<<" -------------------> intitization list <--------------------------"<<endl;
    cout<<endl;
    int a,b;
    float c;
    cout<<" enter value of a & b in integer format and c in float format "<<endl;
    cin>>a>>b>>c;
    cout<<endl;
   gamma g(a,b,c);
   g.show_alpha();
   g.show_beta();
   g.show_gamma();







    return 0;
}