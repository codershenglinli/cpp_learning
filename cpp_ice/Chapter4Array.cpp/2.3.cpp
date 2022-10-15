/*
任务描述
本关任务：输入一个字符串（少于80个字符），把字符串中所有的数字字符转换为整数，去掉其他字符。

编程要求
根据提示，在右侧编辑器补充代码，输入一个字符串（少于80个字符），输出转换后的整数值的2倍（不考虑负值，不会超过int的范围）
*/

#include <iostream>
using namespace std;

int main(){
    char ch[81]="";
    cin.getline(ch,81);
    int n=0;
    for (int i=0;i<80;i++){
        if(ch[i]>='0'&&ch[i]<='9'){
            n=n*10+ch[i]-'0';
        }
    }
    cout << 2*n;
    return 0;
}