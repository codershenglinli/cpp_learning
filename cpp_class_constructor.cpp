//构造函数
#include<iostream>
using namespace std;

class Line{
    public:
    void setLength(double len);
    double getLength(void);
    Line(double len);
    ~Line();

    private:
    double length;
};

Line::Line(double len):length(len){
    cout << "Object is being created" << endl;
    // length = len; //initialize
    cout << "length = " << length << endl;
}

Line::~Line(void){
    cout << "Object is bieng deleted";
}

void Line::setLength(double len){
    length = len;
}
double Line::getLength(void){
    return length;
}
int main(){
    Line line1(115.114);
    line1.setLength(114.514);
    cout << line1.getLength() << endl;
    return 0;
}