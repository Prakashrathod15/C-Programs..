#include<iostream>
using namespace std;

class student
{
  protected:
  int roll_number;
  public:
  void set_roll_number(int);
  void get_roll_number();

};
void student::set_roll_number(int r)
{
    roll_number=r;
}
void student::get_roll_number()
{
    cout<<" Your roll number is : "<<roll_number<<endl;
}
class Exam: public student
{
   protected:
   float maths,physics;
   public:
   void set_marks(float,float);
   void get_marks(void);

};
void Exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void Exam::get_marks()
{
    cout<<" The Marks of Maths is : "<<maths<<endl;
    cout<<" The Marks of Physics is : "<<physics<<endl;
}
class result:public Exam
{
    float percentage=(maths+physics)/2;
    public:
    void display()
    {
        cout<<" Your percentage is : "<<(maths+physics)/2<<endl;
    }

};
int main()
{  
    int a;
    float b,c;
    cout<<" Enter roll number "<<endl;
    cin>>a;
    cout<<" Enter math and physics Marks : "<<endl;
    cin>>b>>c;
  result pankaj;
  pankaj.set_roll_number(a);
  pankaj.get_roll_number();
  pankaj.set_marks(b,c);
  pankaj.get_marks();
  pankaj.display();









    return 0;
}