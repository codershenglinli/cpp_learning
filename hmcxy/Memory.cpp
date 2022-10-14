#include<iostream>
using namespace std;
//内存四区，可以参考P323
//栈（STACK）区放了形参、局部变量。
int* func(){
    static int a=10;    //没有static就会出bug，返回栈区的值!而static存在于全局区中
    return &a;
}

//在堆（HEAP）区开辟数据
int *func1(){
    //利用new关键字，开辟数据到堆区
    int *p = new int(10); //new返回了一个堆区的地址,10指定初值
    return p;
}
//开辟变量
int *creat_int(){
    int *p = new int(10);
    return p;
}
void test01(){
    int *p= creat_int();
    cout << *p <<endl;  //10
    delete p;   //灭掉动态变量
    cout << *p <<endl;  //-359260544
}

//开辟数组
int *create_array(){
    int *arr = new int[10];
    return arr;   
}
void test02(){
    int *array = create_array();
    for(int i=0;i<10;i++){
        array[i]=i+100;
        cout << array[i] <<endl;
    }
    delete[] array;
    cout << *array;
}
int main(){
    int *p = func();
    int *p2 =func1();
    cout << *p <<endl;
    cout << *p2 <<endl;
    test01();
    test02();

    return 0;
}

