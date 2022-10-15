/*
任务描述
本关任务：编写一个程序，首先输入一个字符串（少于80个字符），接着再输入一个字符，查找该字符在字符串中是否存在。如果找到，则输出该字符串在字符串中所对应的最大下标（下标从0开始）；否则输出“Not Found”

编程要求
根据提示，在右侧编辑器补充代码，用户输入一个字符串（少于80个字符），接着再输入一个字符，输出该字符串在字符串中所对应的最大下标（下标从0开始），或者否则输出“Not Found”
*/

#include <iostream>
using namespace std;

int main(){
    char ch[81]="";
    cin.getline(ch,81);
    char target;
    //cin >> target;
    cin.get(target);
    int max=-1;
    for(int i=0;i<80;i++){
        if (ch[i]==target){
            max = i;
        }
    }
    if (max==-1)    cout << "Not Found";
    else cout << max;
    return 0;
}