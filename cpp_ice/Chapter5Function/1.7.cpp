/*
任务描述
本关任务：设计函数fib，每调用一次就返回Fibonacci数列的下一个值，即第一次调用返回1，第二次调用返回1，第三次调用返回2，第四次调用返回3……

编程要求
根据提示，在右侧编辑器补充代码，完成fib函数，main函数已隐藏，不得使用全局变量。
*/

#include<iostream>
using namespace std;

int fib()
{
    static int n = 0;
    n=n+1;
    int *array = new int[n+1];
    array[0]=0;
    array[1]=1;
    for (int i=2;i<=n;i++){
        array[i]= array[i-1]+array[i-2];
    }
    return array[n];
    
}

int main(){
    cout << fib() << endl;
    cout << fib() << endl;
    cout << fib() << endl;
    cout << fib() << endl;
    cout << fib() << endl;
}