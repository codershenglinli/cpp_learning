/*
任务描述
本关任务：编写一个程序，从键盘上输入一篇英文文章，统计出其中的英文字母（不区分大小写）、数字和其他非空白字符的个数。

编程要求
根据提示，在右侧编辑器补充代码，用户首先输入英文文章的行数n（1≤n≤10），接着依次输入n行内容（每行少于80个字符）。要求统计出其中的英文字母（不区分大小写）、数字和其它非空白字符的个数。
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch[10][81]={""};
    cin.get();
    for (int i=0;i<n;i++){
        cin.getline(ch[i],81);
    }
    
    int letter=0,num=0,other=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<80;j++){
            if (ch[i][j]>='a'&&ch[i][j]<='z'||ch[i][j]>='A'&&ch[i][j]<='Z'){
                ++letter;
            }else if (ch[i][j]>='0'&&ch[i][j]<='9'){
                ++num;
            }else if (ch[i][j]!=' '&&ch[i][j]!='\0'){
                ++other;
            }
        }
    }
    cout <<"英文字母："<< letter <<endl;
    cout <<"数字："<< num <<endl;
    cout <<"其他字符："<< other <<endl;

    return 0;
}