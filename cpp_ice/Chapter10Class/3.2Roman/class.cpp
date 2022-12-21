#include "class.h"
#include <iostream>
using namespace std;

//储存罗马数字用的字符集
char RomanWithInt::cset[7] = {'I','V','X','L','C','D','M'}; 

/// @brief 将整数输入转化为int形式的数字
/// @param input 
void RomanWithInt::Str2Int(char input[]){
    num = 0;
    for(int i=0;input[i]!='\0';++i){
        num = num*10 + input[i] - '0';
    }
}

/// @brief 递归实现转换
/// @param n 
/// @param i 
void RomanWithInt::Int2RomanRecursive(int n,int i){
    //似乎不能在函数定义时指定静态
    if(n==0)    return;
    int curr = n % 10;
    Int2RomanRecursive(n/10,i+2);
    //输出当前位数的罗马表示，在递归后进行，实现逆序。
    if(curr==0) return;
    if(curr>=1&&curr<=3){
        for(int cnt=0;cnt<curr;++cnt)
            cout << cset[i];
    }else if(curr==4){
        cout << cset[i] << cset[i+1];
    }else if(curr==5){
        cout << cset[i+1];
    }else if(curr>=6&&curr<=8){
        cout << cset[i+1];
        for(int cnt=0;cnt<curr-5;++cnt){
            cout << cset[i];
        }
    }else{
        cout << cset[i] << cset[i+2];
    }
}
/// @brief 装饰用的函数，通过调用私有的递归函数实现输出
/// @param input 
void RomanWithInt::Int2Roman(char input[]){
    Str2Int(input);
    Int2RomanRecursive(num,0);
    cout << endl;
}

/// @brief 将罗马数字输入转化为整数并进行输出
/// @param input 
void RomanWithInt::Roman2Int(char input[]){
    num = 0;
    for(int i=0;input[i]!='\0';++i){

        if(input[i]=='M'){
            num+=1000;
        }

        if(input[i]=='D'){
            num+=500;
        }

        if(input[i]=='L'){
            num+=50;
        }

        if(input[i]=='V'){
            num+=5;
        }

        

        if(input[i]=='C'){
            if(input[i+1]=='D'||input[i+1]=='M'){
                num-=100;
            }else{
                num+=100;
            }
        }

        if(input[i]=='X'){
            if(input[i+1]=='L'||input[i+1]=='C'){
                num-=10;
            }else{
                num+=10;
            }
        }

        if(input[i]=='I'){
            if(input[i+1]=='V'||input[i+1]=='X'){
                num-=1;
            }else{
                num+=1;
            }
        }
    }
    print_int();
}

/// @brief 打印输出储存的int形式的数字
void RomanWithInt::print_int(){
    cout << num << endl;
}