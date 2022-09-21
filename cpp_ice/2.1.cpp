#include <iostream>
#include<iomanip>
#define PI 3.14
using  namespace std;
int main()
{
    //输入你的代码
    int r;
    cin>>r;
    double volume=PI*r*r*r*4/3;
    double s=4*PI*r*r;
    cout <<"半径为"<<r<<"的球体积为"<<fixed<<setprecision(1)<<volume<<endl;
    cout <<"半径为"<<r<<"的球体表面积为"<<fixed<<setprecision(1)<<s;
    return 0;
}