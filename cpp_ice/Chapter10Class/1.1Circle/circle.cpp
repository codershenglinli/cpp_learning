#include "circle.h"
void Circle::getO(int &x0,int &y0){
    x0 = x;
    y0 = y;
}
int Circle::getR(){
    return r;
}
void Circle::move(int delta1,int delta2){
    x = x+delta1;
    y = y+delta2;
}
void Circle::setR(int new_r){
    r = new_r;
}