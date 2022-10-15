#include<iostream>
using namespace std;

class Box
{
    public:
        double length;
        double breadth;
        double height;
        double get(void);
        void set(double len,double bre,double hei);
        //在类定义内部定义（内联的）
        double getVolume(void){
            return length * breadth *height;
        }
        double changeShit(void){
            return shit;
        }
    private: //private 成员只能被本类成员（类内）和友元访问，不能被派生类访问；
        double shit = 2.50;
    protected: //protected 成员可以被派生类访问。
        double protectedShit=102.201; 
};

class shitBox:Box{
    public:
        double setShitBox(void){
            return protectedShit;
        }
};

double Box::get(void){
    return length*breadth*height;
}

//运用范围解析运算符::定义该函数
void Box::set(double len,double bre,double hei)
{
    length = len;
    breadth = bre;
    height = hei;
}

int main(){
    Box Box1;
    Box Box2;
    Box Box3;

    Box1.height = 1.0;
    Box1.length = 1.0;
    Box1.breadth = 1.0;
    double volume = Box1.get();
    cout << "The volume of Box3 is " << volume <<endl;

    cout << Box1.changeShit() << endl;

    shitBox Box;
    cout << Box.setShitBox() <<endl;
    
    return 0;
}