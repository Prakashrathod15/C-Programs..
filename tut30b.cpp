#include<iostream>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<" the point is : "<<x<<" , "<<y<<endl;
    }
};

int main()
{
    int r,s,t,u;
    cout<<" enter points "<<endl;
    cin>>r>>s>>t>>u;


 point p(r,s);
 p.display();

 point q(t,u);
 q.display();





    return 0;
}