/*
任务描述
本关任务：输入两个十进制正整数 n 和 base(2≤base≤16)，将 n 转换为 base 进制后输出。

编程要求
根据提示，在右侧编辑器补充代码，输入两个十进制正整数 n 和 base(2≤base≤16)，将 n 转换为 base 进制后输出。大于十进制的 base 进制常用的是十六进制，在十六进制中，除了十进制中用到的 0-9 这十个数字外，还引入了A、B、C、D、E、F 来分别表示十进制的10、11、12、13、14、15。要求定义并调用函数 printInt(n,base)，它的功能是屏幕输出 n 的 base 进制表示
*/
#include <iostream>
using namespace std;

void printInt(int n,int base){
    int array[100];
    int i;
    for (i=0;n!=0;i++){
        array[i] = n%base;
        n = n/base;
    }
    for (int j=i-1;j>=0;j--){
        switch (array[j]){
            case 10:
                cout << 'A';break;
            case 11:
                cout << 'B';break;
            case 12:
                cout << 'C';break;
            case 13:
                cout << 'D';break;
            case 14:
                cout << 'E';break;
            case 15:
                cout << 'F';break;
            default:
                cout << array[j];
        }

    }
}

int main(){
    int num,base;
    cin >> num >>base;
    printInt(num,base);
}