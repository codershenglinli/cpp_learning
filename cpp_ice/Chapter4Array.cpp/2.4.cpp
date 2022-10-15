/*
任务描述
本关任务：输入一个字符串（少于80个字符），统计并输出其中元音字母（AEIOUaeiou）的个数（不区分大小写）。

编程要求
根据提示，在右侧编辑器补充代码，用户输入一个字符串（少于80个字符），统计并输出其中元音字母（AEIOUaeiou）的个数

*/

#include <iostream>
using namespace std;

int main(){
    char ch[81]="";
    cin.getline(ch,81);
    char vowel[11]="AEIOUaeiou";
    int n=0;
    for (int i=0;i<80;i++){
        for (int j=0;j<10;j++){
            if (ch[i]== vowel[j]){
                n++;
            }
        }
    }
    cout << n;
    return 0;
}