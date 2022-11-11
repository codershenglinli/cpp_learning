/*
任务描述

本关任务：修改ppt中分治法求最大最小数的程序，使之能够求最大和第二大数，同时还要求尽量节约空间
编程要求

根据提示，在右侧编辑器补充代码，用户先输入元素个数n(n>2)，然后依次输入这n个整数，输出其中最大和第二大数
*/
#include <iostream>
using namespace std;
int MAX(long int a,long int b){
    if(a>b) return a;
    else return b;
}

int MAX(long int a,long int b,long int c){
    if(a>=b&&a>=c)  return a;
    if(b>=a&&b>=c)  return b;
    return c;
}
void max_max(long int a[],int n,long int *max,long int *max2){
    switch (n)
    {
    case 1:
        *max = *max2 = a[0];
        break;
    case 2:
        if(a[0]>a[1]) {*max = a[0]; *max2 = a[1];}
        else {*max = a[1];*max2 = a[0];}
        break;
    default:
        long int max_1,max_2,max2_1,max2_2;
        max_max(a,n/2,&max_1,&max2_1);
        max_max(a+n/2,n-n/2,&max_2,&max2_2);
        *max = MAX(max_1,max_2);
        if (*max==max_1){
            *max2 = MAX(max_2,max2_1,max2_2);
        }else{
            *max2 = MAX(max_1,max2_1,max2_2);
        }
    }
    return;
}

int main(){
    int n;
    long int A[10000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    long int max,max2;
    max_max(A,n,&max,&max2);
    cout << max << ' ' << max2;
}