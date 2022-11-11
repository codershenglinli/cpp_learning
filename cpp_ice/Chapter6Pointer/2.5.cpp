/*
任务描述
本关任务：编写一个函数oddstr，将一个字符串奇数位置的字符构成一个字符串

编程要求
根据提示，在右侧编辑器补充代码，用户输入一个长度小于200的字符串，main函数通过调用oddstr得到该字符串奇数位置的字符构成的字符串，然后输出新的字符串


*/
#include <iostream>
using namespace std;

char *oddstr(char *str){
    //统计字符数
    int n;
    for(n=0;str[n]!='\0';++n);
    char *odd = new char[n/2+1];
    for(int i=0;i<n;++i){
        if(i%2==1){
            odd[(i-1)/2] = str[i];
        }
    }
    odd[n/2]='\0';
    return odd;
}
int main() {
    char str[200];
    cin >> str;
    char *odd = oddstr(str);
    cout << odd << endl;
    delete []odd;
    return 0;
}
