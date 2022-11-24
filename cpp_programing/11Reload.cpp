#include <iostream>
using namespace std;
class Rational
{
private:
    int num;
    int den;
    int gcd(int m,int n){
        if(m%n==0)  return n;
        return gcd(n%m,m);
    }
    void ReductFraction(){
        int d = gcd(num,den);
        num = num/d;
        den = den/d;
    }

public:
    Rational(int n=0,int d=1);//default argument should only be defined in the declaration!!!
    Rational operator+(const Rational &r1) const;   //The method is const -> won't change the class itself
    Rational operator*(const Rational &r1) const;
    void display() const {cout << num << '/' << den;}
    ~Rational();
};

Rational::Rational(int n,int d)
{
    num = n;
    den = d;
    ReductFraction();
}

Rational::~Rational()
{
}

Rational Rational::operator+(const Rational &r1) const{
    //this is the first argument by defalut
    Rational tmp;

    tmp.num = num*r1.den+r1.num*den;
    tmp.den = den*r1.den;
    tmp.ReductFraction();
    return tmp;
}

Rational Rational::operator*(const Rational &r1) const{
    Rational tmp;
    tmp.num = num*r1.num;
    tmp.den = den*r1.den;
    tmp.ReductFraction();
    return tmp;
}

int main(){
    Rational r1,r2(10,2);    //default. DO NOT USE Rational r1()!!!!!
    r1.display();
    r2.display();
    Rational r3 = r1*r2;
    r3.display();

}