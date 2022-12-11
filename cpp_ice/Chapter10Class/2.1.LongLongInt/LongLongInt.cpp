#include "LongLongInt.h"
#include <iostream>
#include <cstring>
using namespace std;

void bigInt::read(){
    int i=1;
    char ch;
    ptr = new char[1];
    for(;cin.get(ch)&&ch!='\n';++i){
        char *temp = new char[i+1];
        strcpy(temp,ptr);
        temp[i-1] = ch;
        temp[i] = '\0';
        delete []ptr;
        ptr = temp;
    }
    n=i-1;
    reverse();
}

void bigInt::reverse(){
    for(int i=0;i<n/2;++i){
        char temp = ptr[i];
        ptr[i] = ptr[n-1-i];
        ptr[n-1-i] = temp;
    }
}

bigInt sum(const bigInt &a, const bigInt &b){
    int larger_n = (a.n>b.n)?a.n:b.n;
    char *ans = new char[larger_n+2];
    char *x1 = new char[larger_n+1];
    char *x2 = new char[larger_n+1];
    //Initialize
    for(int i=0;i<larger_n+1;++i){
        ans[i]='\0';
        x1[i]='\0';
        x2[i]='\0';
    }

    //copy
    strcpy(x1,a.ptr);
    strcpy(x2,b.ptr);

    //change each num to int
    for(int i=0;x1[i]!='\0';++i){
        x1[i]= x1[i]-'0';
    }
    for(int i=0;x2[i]!='\0';++i){
        x2[i]= x2[i]-'0';
    }

    //calculate
    for(int i=0;i<larger_n;++i){
        ans[i] = ans[i]+x1[i]+x2[i];
        if(ans[i]>=10){
            ++ans[i+1];
            ans[i] = ans[i]%10;
        }
    }
    for(int i=0;i<larger_n+1;++i){
        ans[i]+='0';
    }
    bigInt daan;
    daan.ptr = ans;
    daan.n = larger_n+1;
    return daan;
}

void bigInt::show(){
    reverse();
    ptr[n]='\0';
    while(*ptr=='0'){
        ++ptr;
    }
    cout << ptr;
}
