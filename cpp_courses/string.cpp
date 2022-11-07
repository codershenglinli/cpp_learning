#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //如果定义字符串ch。输入字符串到ch中。
    char ch[2]="";
    cin >> ch;  //注意超界（似乎无影响？）
    cout << ch;

    char ch2[2]="";
    //gets函数
    gets(ch2);   //输入直至回车
    puts(ch2);

    //上面的都莫名其妙，常常不能符合要求。

    //cin.get()和cin.getline()
    cin.get(ch,2);  //cin.get不会删除流中的结束符
    cout << ch;
    //cin.getline()会删掉流中的结束符

    char string1[10]="Hello";
    char string2[10]="Wor";
    cout << strlen(string1) << endl;
    strncpy(string1,string2,3);
    cout << string1;    //Worlo,覆盖
    
    strcat(string1,string2);    //WorloWor
    cout << string1;

    cout << strchr(string1,'o'); //返回第一次出现这个字符的地址   //orloWor



    return 0;
}