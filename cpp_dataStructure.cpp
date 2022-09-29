#include <iostream>
#include <cstring>
using namespace std;

struct Books
{
    char title[50];
};

//结构作为函数参数
void printBooks(Books sth){
    //属于Books struct类型的变量sth
    cout << sth.title << endl;
}

int main(){
    Books Book1;

    strcpy(Book1.title,"C++ 教程"); //访问结构成员
    printBooks(Book1);

    //指向结构的指针
    Books *struct_ptr;
    struct_ptr = &Book1;
    cout << struct_ptr -> title << endl; // 指针用->运算符访问结构成员
    return 0;
}