#include<iostream>
#define PI 3.14
#include <cmath>
using namespace std;

int main(){
    //数据类型
    //枚举类型：各元素以列表对应位置数字赋值。然而不能改动。
    enum b{sunday,monday};
    b a;
    a=sunday;
    if (a<monday)   cout<< "yes!";
    
    int n =65;
    //声明常数
    const int i=n+1;
    char ch;
    //强制类型转换：静态转换
    ch = static_cast<char>(n);
    cout << ch;
    ch = char(n);
    cout <<ch<<endl;

    //cmath library
    cout <<abs(-3.4) <<fabs(-3.4)<<endl;
    cout << exp(2)<<endl;

    //C++11
    cout << -5/2 <<endl;//向0取整

    cout <<(-5)%2;//与左边数字符号相同

    //自增自减运算符
    int shit = 0;
    int y=0;
    y=shit++;
    cout <<y<<' '<<shit;//y=0;shit=1
    y=++shit;//y=shit=2
    cout<<y;
    cout<< (true+false) <<endl;

}