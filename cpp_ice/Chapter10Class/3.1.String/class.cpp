#include <iostream>
#include <cstring>
#include "class.h"
using namespace std;

//声明时给出默认参数，定义时不应当重复写
String::String(char *myStr){
    this->myStr = new char[100];
    int i=0;
    for(;myStr[i]!='\0';++i){
        this->myStr[i] = myStr[i];
    }
    this->myStr[i]='\0';
    myLen = length();
}

String::String(String &str){
    myLen = str.length();
    myStr = new char[myLen+1];
    strcpy(myStr,str.myStr);
}

String::~String(){
    delete []myStr;
}
int String::length(){
    int n=0;
    for(;myStr[n]!='\0';++n);
    return n;
}

String String::substr(int start, int end){
    char *temp = new char[end-start+1];
    for(int i=0;i<=end-start;++i){
        temp[i] = myStr[start+i];
    }
    temp[end-start+1]='\0';
    String ans(temp);
    return ans;
}

int String::find_first_of(char c){
    int i;
    for(i=0;myStr[i]!=c&&i<myLen;++i);
    if(myStr[i]==c)   return i;
    else return -1;
}

void String::add_before(int index,char c){
    //创建一个更大的空间
    char *temp = new char[myLen+2];
    //拷贝index之前
    for(int i=0;i<index+1;++i){
        temp[i]=myStr[i];
    }
    //拷贝index
    temp[index+1] = c;
    //拷贝index之后
    for(int i=index+1;i<myLen;++i){
        temp[i+1] = myStr[i];
    }
    //删掉原来的
    delete []myStr;
    //替换
    myStr = temp;
    //改长度
    ++myLen;
}

void String::delete_at(int index){
    char *temp = new char[myLen];
    for(int i=0;i<index;++i){
        temp[i]=myStr[i];
    }
    for(int i=index+1;i<myLen;++i){
        temp[i-1]=myStr[i];
    }
    delete []myStr;
    myStr = temp;
    --myLen;
}

void String::printStr(){
    for(int i=0;i<myLen;++i){
        cout << myStr[i];
    }
    cout << endl;
}

