#include<iostream>
using namespace std;
//交换函数
//reference
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//ptr
void swap_ptr(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

//引用作为函数的返回值

//不要返回局部变量的引用
int& ref(){
    int shit=0;
    return shit;
}

//函数调用可以作为左值
int& ref2(){
    static int a =10;
    return a;
}

//打印数据函数，不希望在函数内部修改形参
void print_val(const int &val){
    //val =100000;  assignment of read-only reference 'val'
    cout << val;
}
int main(){
    //引用必须初始化
    //引用在初始化后不能更改
    int a=0;
    int &b=a;   //b是a的别名
    //引用本质是指针常量
    //int* const b = &a
    b=2;
    cout << a; 
    int c=1;
    int d=0;
    swap(c,d);
    swap_ptr(&c,&d);
    cout << "c=" <<c<<endl;
    cout <<"d="<<d<<endl;     
    //int &returnRef = ref(); //Secgmentation fault;有非法虚拟地址                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    int &returnRef =ref2();
    int returnREF_int =ref2();//创建了一个新变量，令它的值等于a的别名
    ref2() = 1000;//对a的别名直接操作
    cout << ref2() << returnRef << returnREF_int;

    const int &ref = 10; //ref只读不可修改了

    int e = 10;
    print_val(e);
    e=100;
    print_val(e);
    return 0;
}