 
 
 #include<iostream>
 using namespace std;
 int main()
 {
 cout<<endl;
    cout<<" For year "<<endl;
    // S.I=P*T*R
    // Where p = principle amount , T= time ....i..e.. no of years and R = rate ( in percentage )

    float P,T,R,interest;
    cout<<" enter principle amount " <<endl;
    cin>>P;
    cout<<" enter Time period "<<endl;
    cin>>T;
    cout<<" enter Rate of interest "<<endl;
    cin>>R;
    interest=(P*R*T)/100;
    cout<<" your simple interest after"<<T<<" is " <<interest<<endl;
    cout<<endl<<endl;
    cout<<" For Month "<<endl;
    // S.I = ( P*N*R)/(12*100) where N is no of months
    float n,m=12, interest2,val=1200;
    n=T*m;
    interest2=(P*R*n)/val;
    
    cout<<" the simple interest in month is :"<<interest2<<endl;
    cout<<endl<<endl;
    cout<<" for days "<<endl;
    
    double b=30.41666666666667,interest3,val2=36500,d;
    d=n*b;
    interest3=(P*d*R)/(val2);
    cout<<" the interest in day is : "<<interest3<<endl;

return 0;
 }