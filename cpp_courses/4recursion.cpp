#include<iostream>
using namespace std;

double f(double x){
    return x*x;
}
double integral(double a,double b,double dt,double (*f)(double)){
    double sum=0;
    for (a=a+dt/2;a<b;sum+=f(a)*dt,a+=dt);
    return sum;
}
int main(){
    cout << integral(0,1,0.001,f);
    int a,b,c,d;
    bool flag=false;
    for(a=1;a<=4&&!flag;++a){
        for(b=1;b<=4&&!flag;++b){
            if(a==b) continue;
                else 
                for (c=1;c<=4;++c)
                    if(c==a||c==b)continue;
                    else{
                        d=10-a-b-c;
                        if((a==1)+(b==4)+(c==3)==1&&((b==1)+(a==4)+(c==2)+(d==3))==1){
                            cout<<a<<b<<c<<d;
                            flag = true;
                            break;
                        }
                    }
        }
    }   
    return 0;
}