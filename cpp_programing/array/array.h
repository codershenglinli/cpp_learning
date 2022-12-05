//函数声明
//类型定义
//符号常量
#ifndef _array_h    //避免重定义
#define _array_h
struct DoubleArray{
    int low;
    int high;
    double *storage;
    bool initialize(int lh, int rh);
    bool insert(int index, double value);
    bool fatch(int index, double &value);
    void cleanup();
};
#endif