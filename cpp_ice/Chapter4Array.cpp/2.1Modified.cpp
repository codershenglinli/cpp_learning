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
char *int_to_str(int n,char *string){
    if (n<10) {*string = (n%10) + '0';*(string+1) = '\0';return string;}
    else{
        string = int_to_str(n/10,string)+1;
        *string = (n%10) + '0'; //放在递归之后，可以在逆向执行
        *(string+1) = '\0';
    }

    return string; 
}


int main(){
    int base;
    char array[100];
    int_to_str(100,array);
    cout << array;
    cin>>base;
    char num_in_base[1000];
    for (int i=1;i<=200;i++){

    }

    return 0;
}