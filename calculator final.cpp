#include <iostream>
#include<iomanip>

using namespace std;

exp(){
    double e=2.7183;

}
float sqrt(){
    double x,i;
    cout<<"enter a number to find a sqrt"<<endl;
    cin>>x;
    for(i=0.001;i*i<x;i=i+0.001);
    std::cout<<std::fixed<<std::setprecision(2)<<i<<endl;
}
double exponential(){
    int a,i;
    double b,x,w=1;
    cout<<"enter 1 if you want the base to be e"<<endl;
    cout<<"enter 2 if you want to give the base and power"<<endl;
    cin>>a;
    if(a==1){
        cout<<"enter the power to which u want to raise e"<<endl;
        cin>>x;
        for(i=0;i<x;i++){
            w=w*2.7183;
        }
        cout<<w<<endl;
    }
    if(a==2){
        cout<<"enter the value of base:"<<endl;
        cin>>b;
        cout<<"enter the power to be raised to:"<<endl;
        cin>>x;
        for(i=0;i<x;i++){
            w=w*b;
        }
        cout<<w<<endl;
    }
    return w;
}

float basicoperations (int g){
    double a,b,m;
    cout<<"enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    switch(g){
    case 1:
        m=a+b;
        cout<<a+b<<endl;
        break;
    case 2:
        m=a-b;
        cout<<a-b<<endl;
        break;
    case 3:
        m=a*b;
        cout<<a*b<<endl;
        break;
    case 4:
        m=a/b;
        cout<<a/b<<endl;
        break;
    default:
        cout<<"error has occured"<<endl;

    }
    return m;
}
trignometricfunctions(){
double p,r,d,S,C,q,u;
int z;
string operation;
cout<<"enter ur angle in degrees"<<endl;
cin>>d;
q=d;
wer:
    if(q<360){
        p=q;
    }
    if(90<q<180){
        q=180-q;
    }else if(q<270){
        q=q-180;
    }else if(q<360){
        q=270-q;
    }
    if(q>360){
        q=q-360;
        goto wer;
    }
cout<<"enter your choice"<<endl;
cout<<"1 for sin"<<endl;
cout<<"2 for cos"<<endl;
cout<<"3 for tan"<<endl;
cout<<"4 for sec"<<endl;
cout<<"5 for cosec"<<endl;
cout<<"6 for cot"<<endl;
cin>>z;
r=(q*22)/(7*180);
u=1-r;
if(d<=10){
    switch(z){
    case 1:
        cout<<r<<endl;
        break;
    case 2:
        cout<<u<<endl;
        break;
    case 3:
        cout<<r/u<<endl;
        break;
    case 4:
        cout<<1+((r*r)/2)<<endl;
        break;
    case 5:
        cout<<((1/r)+r/6)<<endl;
        break;
    case 6:
        cout<<u/r<<endl;
        break;
    default:
        cout<<"INVALID INPUT"<<endl;
    }
}
    else{
            S=(r-((r*r*r)/6)+((r*r*r*r*r)/120)-((r*r*r*r*r*r*r)/5040));
            C=(1-((r*r)/2)+((r*r*r*r)/24)-((r*r*r*r*r*r)/720));
            if(90<q<180){
                S=S;
                C=-C;
            }else if(q<270){
                S=-S;
                C=-C;
            }else{
                S=-S;
                C=C;
            }
        switch(z){
    case 1:
        cout<<S<<endl;
        break;
    case 2:
        cout<<C<<endl;
        break;
    case 3:
        cout<<S/C<<endl;
        break;
    case 4:
        cout<<1/C<<endl;
        break;
    case 5:
        cout<<1/S<<endl;
        break;
    case 6:
        cout<<C/S<<endl;
        break;
    default:
        cout<<"INVALID INPUT"<<endl;

        }
    }
}

double linearequations(){
    float a1,b1,c1,a2,b2,c2,x,y;
    cout<<"enter the coefts of x,y and constant"<<endl;
    cout<<"ex:"<<endl;
    cout<<"if ur equation is x+2y=8"<<endl;
    cout<<"then enter 1 2 and 8"<<endl;
    cout<<"first equation"<<endl;
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cout<<"input successful"<<endl;
    cout<<"second equation"<<endl;
    cin>>a2;
    cin>>b2;
    cin>>c2;
    cout<<"x="<<(((c1*b2)-(c2*b1))/((a1*b2)-(a2*b1)))<<endl;
    cout<<"y="<<(((c1*a2)-(c2*a1))/((a2*b1)-(a1*b2)))<<endl;
}
quadraticequation(){
    double a,b,c,d,i,p,x1,x2;
    cout<<"enter the coefficients of the quadratic equation"<<endl;
    cout<<"ex:"<<endl;
    cout<<"if ur equation is x*2+6x+5=0"<<endl;
    cout<<"then enter 1 6 and 5"<<endl;
    cout<<"enter now"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    d=((b*b)-(4*a*c));
    if(d>=0){
        for(i=0.01;i*i<d;i=i+0.01);
        x1=(((-b)+i)/2*a);
        x2=(((-b)-i)/2*a);
        cout<<"the solutions of the equation are"<<endl;
        cout<<x1;
        cout<<x2;
    }
    if(d<0){
        p=-d;
        for(i=0.01;i*i<p;i=i+0.01);
        cout<<"the solutions of the quadratic equation are"<<endl;
        cout<<(-b)<<"+"<<i<<"i"<<"/"<<2*a<<endl;
        cout<<(-b)<<"-"<<i<<"i"<<"/"<<2*a<<endl;
    }
}

long double raise10(long double m){
    int j;
    long double r=1;
    for(j=0;j<10;j++){
        r=r*m;
    }
    return r;
}


long double logarithm(){
    long double k,p,m,r,y;
    int j,f=1,l,e,z,u,o;
    cout<<"enter the base of logarithm"<<endl;
    cin>>k;
    cout<<"enter the argument of logarithm"<<endl;
    cin>>p;
    for(j=1;f<=p;j++){
        f=k*f;
        if(f<p){
            l=j;
    }
        if(f==p){
            l=j;
    }
    }
    m=p*k/f;
    f=1;
    r=raise10(m);
    cout<<r<<endl;
    for(u=1;f<=r;u++){
        f=f*k;
        if(u<10){
            e=u-1;
        }else{
            e=9;
        }
    }
    m=m*k/f;
    f=1;
    r=raise10(m);
    for(o=1;f<=r;o++){
        if(o<10){
        f=f*k;
        z=o-1;
        }else{
            z=9;
        }
    }
    cout<<l<<"."<<e<<z<<endl;


}
int main()
{
    int c,n,g,l;
    double m,w,y,p,q;
    cout<<"operation guidelines"<<endl;
    cout<<"if you are entering two numbers then:"<<endl;
    cout<<"enter the first number then press enter key on keyboard"<<endl;
    cout<<"then enter the other value and press enter key"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
jkl:
    cout<<"choies list is as follows"<<endl;
    cout<<"1 for algebraic functions"<<endl;
    cout<<" "<<endl;
    cout<<"2 for trignometric functions"<<endl;
    cout<<" "<<endl;
    cout<<"3 for exponential functions"<<endl;
    cout<<" "<<endl;
    cout<<"4 for finding sqrt of a number"<<endl;
    cout<<" "<<endl;
    cout<<"5 if u want to have a solution of a linear equation"<<endl;
    cout<<" "<<endl;
    cout<<"6 to solve a quadratic equation"<<endl;
    cout<<" "<<endl;
    cout<<"7 to solve logarithms"<<endl;
    cout<<" "<<endl;
    cout<<"please enter your choice"<<endl;

    cin>>n ;
    if(n==1){
        cout<<"1 for addition"<<endl;
        cout<<"2 for subtraction"<<endl;
        cout<<"3 for multiplication"<<endl;
        cout<<"4 for division"<<endl;
        cin>>g;
        m=basicoperations(g);
        goto abc;
    }
    if(n==2){
        m=trignometricfunctions();
        goto abc;
    }
    if(n==3){
        w=exponential();
        goto abc;
    }
    if(n==4){
        y=sqrt();
        goto abc;
    }
    if(n==5){
        linearequations();
        goto abc;
    }
    if(n==6){
        quadraticequation();
        goto abc;
    }
    if(n==7){
        l=logarithm();
        goto abc;
    }
    abc:
    cout<<"1 for terminating ur claculations"<<endl;
    cout<<"2 for further continuation of the programme"<<endl;
    cout<<"enter ur choice"<<endl;
    cin>>c;
    if(c==1){
        goto ghi;
    }else if(c==2){
        goto jkl;
    }else{
        cout<<"INVALID INPUT"<<endl;
        goto abc;
    }
ghi:

    return 0;

}
