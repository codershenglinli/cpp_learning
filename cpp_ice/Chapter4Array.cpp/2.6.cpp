/*
任务描述
本关任务：输入两个字符串str1和str2，查找str2在str1里首次出现的位置。

编程要求
根据提示，在右侧编辑器补充代码，用户输入两个字符串str1和str2，每个字符串是一行，查找str2在str1里首次出现的位置。如果str2在str1中不存在，则输出-1。
注意：（1）每一行不超过160个字符，可以包含任意字符；（2）不使用字符串比较的库函数。
*/

#include <iostream>
using namespace std;

int main(){
    char ch1[161]="";
    char ch2[161]="";
    cin.getline(ch1,161);
    cin.getline(ch2,161);
    bool found = false;
    for (int i=0;ch1[i]!='\0';i++){
        bool flag = true;

        for (int j=0;ch2[j]!='\0'&&ch1[i+j]!='\0';j++){
            if(ch2[j]!=ch1[i+j]) {
                flag = false;
                break;
            }
        }

        if (flag){
            cout << i;
            found = true;
            break;
        }
    }
    if (!found) cout << -1;
    return 0;
}