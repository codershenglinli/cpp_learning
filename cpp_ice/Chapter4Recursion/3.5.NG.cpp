//判断是否是2的幂。
//输入正整数n，输出判断结果true或false
#include <iostream>
using namespace std;
/*
int main()
{
    unsigned long int n;
    cin>> n;
    while(n){
    
    if(n%2!=0) {
        cout <<"false";break;
    }else{
        if (n==2) {cout << "true";break;}
        n=n/2;
    }
    }

    return 0;
}
*/
bool isN(int n);
//利用位运算的处理方法
//按位与运算
//用n&n-1移除最低位
int main(){
    int n;
    cin >> n;
    if(!(n&(n-1))) cout << "true"; //n&(n-1)可以移除最低位
    else cout << "false";
    cout << isN(n);
}
//用n&(-n)取出最低位1

bool isN(int n){
    int mod;
    if (n==1) return true;
    while (n!=1){
        mod =n%2;
        if(mod!=0) return false;
        n/=2;
    }
    if (mod==0) return true; //通过mod的值判断1从何而来！
    else return false;
}

