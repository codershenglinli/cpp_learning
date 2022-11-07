/*
任务描述
本关任务：回文数是指从左向右念和从右向左念都一样的数。如 12321 就是一个典型的回文数。给定一个进制 B（2≤B≤20，由十进制表示），求出所有的大于等于 1 小于等于 200（十进制下）且它的平方用 B 进制表示是回文数的数。用“A”，“B”，“C”…表示 10，11，12 等等。

编程要求
根据提示，在右侧编辑器补充代码，输入整数 B（B 由十进制表示），输出分成多行，每行输出两个 B 进制的数字，第二个数是第一个数的平方，且第二个数是回文数。
*/
#include <iostream>
#include <cstring>
using namespace std;

/*
void convert(int num,int base){
    char answer[1000];
    char cdigit;
    int digit = num%base;
    char array[] = {"ABCDEFGHIJ"};
    if(digit<10) cdigit = digit+'0';
    if(digit>=10) cdigit = array[digit-10];
    strcat(answer,cdigit); 
    num/base;
}
*/

//这是把整型转换为数组的递归算法！
/*
char *int_to_str(int n,char *string){
    if (n<10) {*string = (n%10) + '0';*(string+1) = '\0';return string;}
    else{
        string = int_to_str(n/10,string)+1;
        *string = (n%10) + '0'; //放在递归之后，可以逆向执行
        *(string+1) = '\0';
    }

    return string; 
}
*/
char *int_to_str_base(int n,char *string,int base){
    char array[] = {"ABCDEFGHIJ"};
    int digit = n%base;

    if (n/base)
        string = int_to_str_base(n/base,string,base)+1;

    if (digit<10)
        *string = (n%base) + '0';
    else
        *string = array[digit-10];

    *(string+1) = '\0';
    return string;
}


char *swap(char string[]){
    int n=0;
    for(;string[n]!='\0';n++);
    int rh=n-1;
    static char str[100];
    for (int i=0;i<rh,rh>=0;rh--,i++){
    str[i]=string[rh];
    }
    return str;
}


bool is_rev(char *string){
    int n=0;
    bool is_rev=true;
    for(;string[n]!='\0';n++);
    int lh=0,rh=n-1;
    for (;lh<=rh;lh++,rh--){
    if(string[lh] != string[rh]){
        is_rev = false;
    }
    }
    return is_rev;
}
int main(){
    int base;
    cin>>base;
    char i_squared[100]="";
    char i_[1000]="";


    for (int i=1;i<=200;i++){
        int_to_str_base(i*i,i_squared,base);
        int_to_str_base(i,i_,base);
        if(is_rev(i_squared))
            //i_ = swap(i_squared);
            cout <<  i_ <<' '<< i_squared <<endl;
    }

    return 0;
}