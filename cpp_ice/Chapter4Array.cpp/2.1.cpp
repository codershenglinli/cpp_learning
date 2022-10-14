#include <iostream>
#include <cmath>
using namespace std;

/*
int convert(int n,int base){
    int answer = 0;
    for (int i=0;n!=0;i++){
    answer=(n%base)*pow(10,i);
    n=n/base;    
    }
    return answer;
}
*/

//十进制转换二进制的递归程序！
/*
int convert_(int n,int base){
    if (n<base) return n;
    else return convert_(n/base,base)*10+n%base;

}
*/

int reverse(int n){
    int a=0;
    while(n){
        a=n%10+a*10;
        n=n/10;
    }
    return a;
}
int main(){
    int base;
    cin >> base;
    cout << reverse(12345);
    for(int i=1;i<=200;i++){
        int con = convert_(i*i,base);
        if (con==reverse(con)) cout << convert_(i,base) << ' ' << con <<endl;
    }
    return 0;
}