#include<iostream>
using namespace std;

int main(){
    cout<<"请输入4个整型数：";
    int a,b,c,d;
    cin >> a>>b >> c >> d;
    double average;
    average=double(a+b+c+d)/4;
    cout<<average;
    return 0;
}