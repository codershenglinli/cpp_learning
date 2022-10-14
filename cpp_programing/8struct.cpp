#include<iostream>
using namespace std;
struct dateT{
    int month;
    int day;
    int year;
};
struct studentT{
    char no[10];
    char name[10];
    dateT birthday;
    int chinese;
    int math;
    int english;
};

int gcd(int m,int n){
    if (m%n==0) return n;
    return gcd(n,m%n);
}
struct rationalT{
    int num;
    int den;
};

rationalT CreateRational(int num,int den){
    return {num,den};
}

rationalT AddRational(rationalT r1,rationalT r2){
    int num = r1.num*r2.den+r2.num*r1.den;
    int den = r1.den*r2.den;
    int g=gcd(num,den);
    num = num/g;
    den = den/g;
    return {num,den};
}
void ShowRational(rationalT t){
    cout << t.num << '/' << t.den << endl;
}


struct pointT
{
    double x,y;
};

int main(){
    studentT student1,studentArray[10],*ptr;
    ptr = studentArray;
    student1 = {"1","liu",{1,2,3},100,100,100};
    studentArray[0]=student1;
    studentArray[1]=student1;
    //cout << (ptr+1) ->no;
    

    pointT p1,p2;
    //setPoint(1,1,p1);
    //setPoint(2,2,p2);

    rationalT t1 =CreateRational(1,2);
    rationalT t2 =CreateRational(1,2);
    rationalT t = AddRational(t1,t2);
    ShowRational(t);
    return 0;
}

void setPoint(double x,double y,pointT &p){
    p.x=x;
    p.y=y;
}

inline double getX(const pointT &p){
    //内联函数
    return p.x;
}

inline double getY(const pointT &p){
    //内联函数
    return p.y;
}

void showPoint(const pointT &p){
    cout << '(' << p.x << ',' << p.y << ')' << endl;
}