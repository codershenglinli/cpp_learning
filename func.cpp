#include<iostream>
#include <cmath>
using namespace std;

double power(double x,double y){
    double chengji=1;
    for(int i=0;i<y;i++){
        chengji = chengji*x;
    }
    return chengji;
}

int main(){
    double i = pow(2,3);
    cout << i;
    return 0;
}