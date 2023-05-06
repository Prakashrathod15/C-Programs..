#include<iostream>
using namespace std;

//                            | Student | ----------------------> Virtual class ( Grand-Fathers )
//  ( Parents)-----| Test |                        | Sport |----------( Parents)
//                            | Result  |  
//                         (   derived class )

class Student 
{
    protected:
    int roll_no;
    public:
    void set_roll_no(int p)
    {
        roll_no=p;
    }
    void print_roll_no()
    {
        cout<<" Your roll_no is : "<<roll_no<<endl;
    }


};

class Test : virtual public Student
{
    protected:
    float physics,maths;
    public:
    void set_physics_score(float m1,float m2)
    {
        physics=m1;
        maths=m2;
    }
    void print_marks()
    {
        cout<<" Your Physics Marks is : "
            <<physics<<endl
            <<" Your Maths Marks is :   "
            <<maths<<endl;
    }

};

class Sport : virtual public Student 
{
    protected:
    float score;
    public:
         void set_score(float c)
         {
             score=c;
         }
         void print_score()
      {
          cout<<" Your PT score is : "<<score<<endl;
      }

};

class Result : public Test , public Sport
{
    private:
    float total;
    public:
         int totalm(void)
         {
             total=physics+maths+score;
             return total;
         }
        void display()
        {
        
            print_roll_no();
            print_marks();
            print_score();
            cout<<endl<<endl;
            cout<<" Your Total Score is : "<<totalm()<<endl;
            cout<<endl;

         }
};

int main()
{
    cout<<endl;
    cout<<" --------------------------> Welcome in Exam Portal <-------------------------------"<<endl;
    cout<<endl;
    int a,b,c;
    float m1,m2;
    cout<<" Enter your Roll_NO : "<<endl;
    cin>>a;
    cout<<endl;
    cout<<" Enter your Physics & Math marks : "<<endl;
    cin>>m1>>m2;
    cout<<endl;
    cout<<" Enter PT score : "<<endl;
    cin>>b;
    cout<<endl;
    Result pankaj;
    pankaj.set_roll_no(a);
    
    pankaj.set_physics_score(m1,m2);
    pankaj.set_score(b);
    pankaj.display();





    return 0;

}