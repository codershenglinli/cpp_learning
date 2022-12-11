#include "clock.h"
#include <iostream>
using namespace std;

int main(){
    Clock c1;
    Clock c2;
    c1.input();
    c2.input();
    Clock c3;
    c3.delta(c1,c2);
    c3.show();
}