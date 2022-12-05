#include <iostream>
using namespace std;
#include "array.h"

int main(){
    DoubleArray array;
    double value;
    int low,high,i;

    cout << "请输入数组下标的范围：";
    cin >> low >> high;

    if(!array.initialize(low,high)){
        cout << "空间分配失败";
        return 1;
    }

    for(int i=low;i<=high;++i){
        cout << "请输入第"<<i<<"个元素";
        cin >> value;
        array.insert(i,value);
    }

    for(int i=low;i<=high;++i){
        array.fatch(i,value);
        cout << value <<endl;
    }

    array.cleanup();
}