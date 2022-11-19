#include <iostream>
using namespace std;

struct complex_number{
    int real;
    int imag;
};

void add(complex_number &a, complex_number &b, complex_number &sum){
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;    
}

void mul(complex_number &a, complex_number &b, complex_number &ans){
    complex_number temp;
    temp.real = a.real*b.real-a.imag*b.imag;
    temp.imag = a.real*b.imag+a.imag*b.real;
    ans = temp;
}

void add_assaign(complex_number &a, complex_number &b){
    add(a,b,a);
}
void mul_assaign(complex_number &a, complex_number &b){
    mul(a,b,a);
}

void print_complex(complex_number &a){
    if(a.real==0){
        if (a.imag==0)   cout << 0;
        else if (a.imag>0)   cout << '+' << a.imag << 'i';
        else    cout << a.imag << 'i';
    }else{
        cout << a.real;
        if(a.imag>0)   cout << '+' << a.imag << 'i';
        if(a.imag<0)   cout << a.imag << 'i';

    }
}

void create(int a,int b,complex_number &c){
    c.real=a;
    c.imag=b;
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    complex_number x,y;
    create(a,b,x);
    create(c,d,y);
    cout << "x = ";
    print_complex(x);
    cout << endl;
    
    cout << "y = ";
    print_complex(y);
    cout << endl;
    
    cout << "x += y; ";
    add_assaign(x,y);
    cout << "x = ";
    print_complex(x);
    cout << endl;
    
    cout << "y *= x; ";
    mul_assaign(y,x);
    cout << "y = ";
    print_complex(y);
    cout << endl;

    complex_number sum_ans,mul_ans;
    add(x,y,sum_ans);
    mul(x,y,mul_ans);
    
    cout << "x + y = ";
    print_complex(sum_ans);
    cout <<endl;
    
    cout << "y * x = ";
    print_complex(mul_ans);
    cout << endl;

    cout << "x = ";    
    print_complex(x);
    cout <<endl;

    cout << "y = ";
    print_complex(y);
    cout <<endl;
    
    return 0;
}