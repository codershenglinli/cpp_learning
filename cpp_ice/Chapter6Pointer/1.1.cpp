/*
任务描述
本关任务：设计一个程序，让用户输入一行句子，数出句子中有多少个单词并输出，再让用户输入一串数字表示单词重新排序的顺序，最后按用户设定的顺序来输出一行新的句子。要求所有数组都只能用new来定义。

编程要求
根据提示，在右侧编辑器补充代码，用户输入的句子里只包含字母和空格（句子末尾没有空格），以回车完成输入，该句子最多100个字符，句子里最多10个单词。用户输入的一串数字是正常表示单词顺序的，不用考虑异常情况。
*/
#include <iostream>
using namespace std;

int main(){
    char *string = new char[101];
    cin.getline(string,101);
    char **words;
    words = new char *[10];
    for(int i=0;i<10;++i){
        words[i] = new char[100];
    }
    int i=0;
    int cnt = 0;
        while(*string!='\0'){
            while(*string == ' ')   ++string;
            int j=0;
            if(*string!=' ')  ++cnt;
            while(*string!=' '&& *string!='\0'){
                words[i][j] = *string;
                words[i][j+1] = '\0';
                ++string;
                ++j;
            }
            ++i;
        }
    
    char *order = new char[cnt];
    for(int i=0;i<cnt;i++){
        order[i] = cin.get();
    }
    cout << cnt << endl;

    for(int i=0;i<cnt;i++){
        cout << words[order[i]-'0'] << ' ';
    }

    return 0;
}