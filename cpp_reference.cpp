#include<iostream>
using namespace std;

void swap(int& x,int& y){
    int c=x;
    x=y;
    y=c;
}

double vals[] = {10.1,12.6,33.1,24.1,50.0};

//返回引用的函数
double& setValues(int i){
    double& ref = vals[i]; //注意：这里引用的是全局变量。
    return ref;
}

//返回指针的函数
double* setValues_ptr(int i){
    double *ptr = &vals[i];
    return ptr;
}
int main(){
    int i;
    double d;

    //r相当于i的一个别名
    int& r=i;
    double& s=d;

    i=5;
    d=5.0;
    cout << i << r << endl;
    cout << d <<s << endl;

    //通过引用改变传入函数的参数
    int a=1;
    int b=2;
    swap(a,b);
    cout << a << ' ' << b <<endl;

    setValues(1) = 3.14;
    *setValues_ptr(2) = 4.13;
    for(int i=0;i<5;i++){
        cout << "vals[" << i << "]= " << vals[i] << endl;
    }

    return 0;
}