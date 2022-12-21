#ifndef _INHE
#define _INH
#include <cstring>
#include <iostream>
using namespace std;
//base class
class car {
    private:
        char no[10];
        char owner[20];
        char type[20];
        int seat;
    public:
        //：构造函数初始化列表
        car(char *s1, char *s2, char *s3,int s):seat(s){
            strcpy(no, s1);
            strcpy(owner, s2);
            strcpy(type, s3);
        }
        void modifyNo(char *s) { strcpy(no,s); }
        //第2个const说明*this是指向常数的指针(pointer to const)
        //也就说明这些函数不会改变类中的成员
        const char*getNo() const{
            return no;
        }
        //应声明为虚函数？
        void display() const{
             cout << no << '\t' << owner << '\t' << type;
        }
};

//类派生列表（class derivation list）
class taxi : public car{
    private:
        double price;
    public:
        //派生类构造函数的写法
        taxi(char *s1, char *s2, char *s3, int s, double p):car(s1,s2,s3,s),price(p) { }
        //重定义基类函数（override？）
        //若函数名相同，原型不同，派生类中有两个重载函数
        //如果原型完全相同，则派生类函数会覆盖基类函数
        void display() const {
            //派生类可以访问基类的公有成员和受保护成员，不能访问私有成员
            //派生类函数仍然可以调用基类的同名函数完成部分功能
            cout << getNo() << '\t' << owner << 

        }
};
#endif