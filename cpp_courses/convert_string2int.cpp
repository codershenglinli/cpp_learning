#include <iostream>
using namespace std;

int str2int(char *s){
    int num=0;
    while(*s){
        num = num*10 + *s-'0';
        ++s;
    }
    return num;
}
int main(){
    char s[6]="12345";
    cout << str2int(s);
    return 0;
}